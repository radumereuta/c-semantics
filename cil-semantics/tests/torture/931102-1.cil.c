/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_b_22 {
   char h ;
   char l ;
};
union __anonunion_T_21 {
   struct __anonstruct_b_22 b ;
};
typedef union __anonunion_T_21 T;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(int x ) 
{ int num ;
  T reg ;

  {
  num = 0;
  reg.b.l = (char )x;
  while (((int )reg.b.l & 1) == 0) {
    num ++;
    reg.b.l = (char )((int )reg.b.l >> 1);
  }
  return (num);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f(2);
  if (tmp != 1) {
    abort();
  }
  exit(0);
}
}
