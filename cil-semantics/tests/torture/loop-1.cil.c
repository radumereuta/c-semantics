/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int main(void) 
{ int i ;
  int j ;
  int k[3] ;
  int tmp ;

  {
  j = 0;
  i = 0;
  while (i < 3) {
    tmp = j;
    j ++;
    k[i] = tmp;
    i ++;
  }
  i = 2;
  while (i >= 0) {
    if (k[i] != i) {
      abort();
    }
    i --;
  }
  exit(0);
}
}
