/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
long a  =    100000L;
long b  =    21475L;
long f(void) 
{ 

  {
  return ((long )((long long )a * (long long )b >> 16));
}
}
int main(void) 
{ long tmp ;

  {
  tmp = f();
  if (tmp < 0L) {
    abort();
  }
  exit(0);
}
}
