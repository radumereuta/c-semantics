module C-COMMON-EXPR-EVAL-SYNTAX
     // TODO(chathhorn): hackish, rename at least
     syntax K ::= rkludge(K) [function, klabel('rkludge)]
     syntax K ::= pkludge(K) [function, klabel('pkludge)]
     syntax K ::= instantiate(SymLoc, Type)
     syntax K ::= checkLoc(SymLoc)
endmodule

module C-COMMON-EXPR-EVAL
     imports C-COMMON-EXPR-EVAL-SYNTAX

     imports C-BITS-SYNTAX
     imports C-BITSIZE-SYNTAX
     imports C-DYNAMIC-SYNTAX
     imports C-ERROR-SYNTAX
     imports C-LITERAL-SYNTAX
     imports C-MEMORY-ALLOC-SYNTAX
     imports C-SYMLOC-SYNTAX
     imports C-SYNTAX
     imports C-TYPING-SYNTAX

     // chathhorn: to work around the new semantics for contexts.
     rule reval(K:K) => checkUse(K) ~> reval(HOLE) [heat]
     rule K:K ~> reval(HOLE) => reval(rkludge(K)) [cool, ndlocal]
     rule rkludge(K:K) => K
          when isKResult(K) =/=K true

     rule peval(K:K) => K ~> peval(HOLE) [heat]
     rule K:K ~> peval(HOLE) => peval(pkludge(K)) [cool, ndlocal]
     rule pkludge(K:K) => K
          when isKResult(K) =/=K true

     rule lv(L:SymLoc, T:Type) => lval(L, T)
          [structural]

     // FIXME Whoah!  What about char types?  What is this about?
     // If the lvalue designates an object of automatic storage duration that
     // could have been declared with the register storage class (never had its
     // address taken), and that object is uninitialized (not declared with an
     // initializer and no assignment to it has been performed prior to use),
     // the behavior is undefined.

     rule rkludge(voidVal) => voidVal
     rule rkludge(emptyValue) => emptyValue
     rule rkludge(tv(V:CValue, T:Type)) => tv(V, T)

     rule pkludge(tv(V:CValue, T:Type)) => tv(V, T)

     /*@ \fromStandard{\source[n1570]{\para{6.3.2.1}{2}}}{
     Except when it is the operand of the \cinline{sizeof} operator, the
     \cinline{_Alignof} operator, the unary \cinline{&} operator, the
     \cinline{++} operator, the \cinline{--} operator, or the left operand of
     the \cinline{.} operator or an assignment operator, an lvalue that does
     not have an array type is converted to the value stored in the designated
     object (and is no longer an lvalue); this is called lvalue conversion.  If
     the lvalue has qualified type, the value has the unqualified version of
     the type of the lvalue; additionally, if the lvalue has atomic type, the
     value has the non-atomic version of the type of the lvalue; otherwise, the
     value has the type of the lvalue. \ldots
     }*/

     // Lvalue conversion.
     rule rkludge(lval(Loc:SymLoc, T:Type)) 
          => instantiate(Loc, T)
          when notBool isArrayType(T)
               andBool notBool isFunctionType(T) 

     rule pkludge(lval(Loc:SymLoc, T:Type)) => lval(Loc, T)
          when notBool isArrayType(T) 
               andBool notBool isFunctionType(T) 

     /*@ \fromStandard{\source[n1570]{\para{6.3.2.1}{3}}}{
     Except when it is the operand of the \cinline{sizeof} operator, the
     \cinline{_Alignof} operator, or the unary \cinline{&} operator, or is a
     string literal used to initialize an array, an expression that has type
     ``array of type'' is converted to an expression with type ``pointer to
     type'' that points to the initial element of the array object and is not
     an lvalue. If the array object has register storage class, the behavior is
     undefined.
     }*/
     rule rkludge(lval(Loc:SymLoc, T:Type))
          => checkRegister(Loc)
          ~> tv(arrayToPtrLoc(Loc, T), arrayToPtrType(T))
          when isArrayType(T)
     rule pkludge(lval(Loc:SymLoc, T:Type))
          => checkRegister(Loc)
          ~> tv(arrayToPtrLoc(Loc, T), arrayToPtrType(T))
          when isArrayType(T)

     syntax Type ::= arrayToPtrType(Type) [function]
     rule arrayToPtrType(T:Type)
          => stripQualifiers(
               t(getModifiers(T), pointerType(innerType(T))))

     syntax SymLoc ::= arrayToPtrLoc(SymLoc, Type) [function]
     rule arrayToPtrLoc(Loc:SymLoc, T:Type)
          => addProv(basedOn(base(Loc), getRestrictBlock(T)),
               addProv(fromArray(0,
                    byteSizeofType(innerType(T)) *Int arrayLength(T)),
               Loc))
          when isRestrictType(T)
     rule arrayToPtrLoc(Loc:SymLoc, T:Type)
          => addProv(fromArray(0,
               byteSizeofType(innerType(T)) *Int arrayLength(T)),
               Loc)
          when notBool isRestrictType(T)

     /*@ \fromStandard{\source[n1570]{\para{6.3.2.1}{4}}}{
     A function designator is an expression that has function type.  Except
     when it is the operand of the \cinline{sizeof} operator, the
     \cinline{_Alignof} operator, or the unary \cinline{&} operator, a function
     designator with type ``function returning T'' is converted to an
     expression that has type ``pointer to a function returning T''.
     }*/
     rule rkludge(lval(Loc:SymLoc, T:Type)) 
          => tv(Loc, t(.Set, pointerType(T)))
          when isFunctionType(T) 
     rule pkludge(lval(Loc:SymLoc, T:Type)) 
          => tv(Loc, t(.Set, pointerType(T)))
          when isFunctionType(T) 

     syntax K ::= checkRegister(SymLoc)
     rule <k> checkRegister(_) => . ...</k>
          <initializing> I:Int </initializing>
          when I >Int 0
          [structural]
     rule <k> checkRegister(Loc:SymLoc) => . ...</k>
          <initializing> 0 </initializing>
          when notBool isRegisterLoc(Loc)
          [structural]
     rule <k> checkRegister(Loc:SymLoc)
               => UNDEF("CEE1",
                    "Address of an array declared with register storage class used in an expression.",
                    "6.3.2.1")
          ...</k>
          <initializing> 0 </initializing>
          when isRegisterLoc(Loc)
          [structural]

     syntax K ::= checkUse(K) [strict]
     syntax K ::= checkTrap(K) [strict]

     rule checkUse(V:KResult) => V
          when isTypedValue(V) =/=K true
          [structural]
     rule checkUse(tv(V:CValue, T:Type)) => tv(V, T)
          when (isSymLoc(V) =/=K true)
               andBool (isTrap(V) =/=K true)
          [structural]
     rule checkUse(tv(V:SymLoc, T:Type)) => checkLoc(V) ~> tv(V, T)
          [structural]
     rule checkUse(tv(trap, T:Type))
          => UNDEF("CEE2", "Indeterminate value used in an expression.",
               "6.2.4, 6.7.9, 6.8")
          ~> tv(trap, T)
          [structural]

endmodule
