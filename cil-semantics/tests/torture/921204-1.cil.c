/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_bf_21 {
   unsigned int b0 : 1 ;
   unsigned int f1 : 17 ;
   unsigned int b18 : 1 ;
   unsigned int b19 : 1 ;
   unsigned int b20 : 1 ;
   unsigned int f2 : 11 ;
};
typedef struct __anonstruct_bf_21 bf;
union __anonunion_bu_22 {
   bf b ;
   unsigned int w ;
};
typedef union __anonunion_bu_22 bu;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
bu f(bu i ) 
{ bu o ;

  {
  o = i;
  if (o.b.b0) {
    o.b.b18 = 1U;
    o.b.b20 = 1U;
  } else {
    o.b.b18 = 0U;
    o.b.b20 = 0U;
  }
  return (o);
}
}
int main(void) 
{ bu a ;
  bu r ;

  {
  a.w = 67108864U;
  a.b.b0 = 0U;
  r = f(a);
  if (a.w != r.w) {
    abort();
  }
  exit(0);
}
}
