/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct foo {
   unsigned int y : 1 ;
   unsigned int x : 32 ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(struct foo x ) 
{ int t ;

  {
  t = (int )x.x;
  if (t < 0) {
    return (1);
  }
  return (t + 1);
}
}
int main(void) 
{ struct foo x ;
  int tmp ;

  {
  x.x = 4294967295U;
  tmp = f(x);
  if (tmp == 0) {
    abort();
  }
  exit(0);
}
}
