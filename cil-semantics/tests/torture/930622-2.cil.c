/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
long double ll_to_ld(long long n ) 
{ 

  {
  return ((long double )n);
}
}
long long ld_to_ll(long double n ) 
{ 

  {
  return ((long long )n);
}
}
int main(void) 
{ long double tmp ;
  long long tmp___0 ;

  {
  tmp = ll_to_ld(10LL);
  if (tmp != (long double )10.0) {
    abort();
  }
  tmp___0 = ld_to_ll((long double )10.0);
  if (tmp___0 != 10LL) {
    abort();
  }
  exit(0);
}
}
