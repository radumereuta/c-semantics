/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(unsigned int number_of_digits_to_use ) 
{ 

  {
  if (number_of_digits_to_use > 1294U) {
    return (0);
  }
  return ((int )(((number_of_digits_to_use * 3321928U) / 1000000U + 1U) / 16U));
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f(11U);
  if (tmp != 2) {
    abort();
  }
  exit(0);
}
}
