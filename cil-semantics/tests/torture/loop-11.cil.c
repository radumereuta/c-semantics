/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
static int a[199]  ;
static void foo(void) 
{ int i ;

  {
  i = 198;
  while (i >= 0) {
    a[i] = i;
    i --;
  }
  return;
}
}
int main(void) 
{ int i ;

  {
  foo();
  i = 0;
  while (i < 199) {
    if (a[i] != i) {
      abort();
    }
    i ++;
  }
  return (0);
}
}
