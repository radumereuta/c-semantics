/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int a  =    1;
int main(void) 
{ long long s ;

  {
  s = (long long )a;
  if (s < 0LL) {
    s = (-0x7FFFFFFF-1);
  } else {
    s = 2147483647LL;
  }
  if (s < 0LL) {
    abort();
  }
  return (0);
}
}
