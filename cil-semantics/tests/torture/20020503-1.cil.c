/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
static char *inttostr(long i , char *buf ) 
{ unsigned long ui ;
  char *p ;

  {
  ui = (unsigned long )i;
  p = (char *)(buf + 127);
  *p = (char )'\000';
  if (i < 0L) {
    ui = - ui;
  }
  while (1) {
    p --;
    *p = (char )(48UL + ui % 10UL);
    ui /= 10UL;
    if (! (ui != 0UL)) {
      break;
    }
  }
  if (i < 0L) {
    p --;
    *p = (char )'-';
  }
  return (p);
}
}
int main(void) 
{ char buf[128] ;
  char *p ;

  {
  p = inttostr(-1L, (char *)(buf));
  if ((int )*p != 45) {
    abort();
  }
  return (0);
}
}
