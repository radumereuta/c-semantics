/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void f(int *x ) 
{ 

  {
  *x = 0;
  return;
}
}
int main(void) 
{ int s ;
  int c ;
  int x ;
  char a[2] ;

  {
  a[0] = (char )'c';
  a[1] = (char )'\000';
  f(& s);
  c = 0;
  if (s == 0) {
    x = 1;
    a[c] = (char )'a';
  } else {
    x = 2;
    a[c] = (char )'b';
  }
  if ((int )a[c] != 97) {
    abort();
  }
  exit(0);
}
}
