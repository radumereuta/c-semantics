/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
char a[10]  = 
  {      (char )'d',      (char )'e',      (char )'a',      (char )'d', 
        (char )'b',      (char )'e',      (char )'e',      (char )'f', 
        (char )'\000',      (char)0};
char acc_a(long i ) 
{ 

  {
  return (a[i - 2000000000L]);
}
}
int main(void) 
{ char tmp ;

  {
  tmp = acc_a(2000000000L);
  if ((int )tmp != 100) {
    abort();
  }
  exit(0);
}
}
