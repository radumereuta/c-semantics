/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct S {
   long o ;
};
struct T {
   long o ;
   struct S m[82] ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
struct T t  ;
int main(void) 
{ struct S *p ;
  struct S *q ;

  {
  p = (struct S *)(& t);
  p = & ((struct T *)p)->m[0];
  q = p + 82;
  while (1) {
    q --;
    if (! ((unsigned long )q > (unsigned long )p)) {
      break;
    }
    q->o = -1L;
  }
  q->o = 0L;
  if ((unsigned long )q > (unsigned long )p) {
    abort();
  }
  if (q - p > 0) {
    abort();
  }
  return (0);
}
}
