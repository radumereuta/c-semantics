/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ double x ;
  double y ;
  double tmp ;

  {
  x = 1.0;
  y = 2.0;
  tmp = x;
  x -= (double )1;
  if ((y > tmp) != 1) {
    abort();
  }
  exit(0);
}
}
