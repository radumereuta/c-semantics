/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ char *c1 ;
  char *c2 ;
  int i ;

  {
  c1 = (char *)"foo";
  c2 = (char *)"foo";
  i = 0;
  while (i < 3) {
    if ((int )*(c1 + i) != (int )*(c2 + i)) {
      abort();
    }
    i ++;
  }
  exit(0);
}
}
