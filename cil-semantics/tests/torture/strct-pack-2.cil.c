/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_A_21 {
   short a  __attribute__((__packed__, __aligned__(2))) ;
   short *ap[2]  __attribute__((__packed__, __aligned__(2))) ;
};
typedef struct __anonstruct_A_21 A;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ short i ;
  short j ;
  A a ;
  A *ap ;

  {
  j = (short)1;
  ap = & a;
  ap->ap[j] = & i;
  exit(0);
}
}
