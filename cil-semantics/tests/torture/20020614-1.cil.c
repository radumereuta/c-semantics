/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
extern void exit(int  ) ;
int main(void) 
{ int i ;
  signed char j ;
  unsigned char k ;

  {
  i = 127;
  j = (signed char )((int )((signed char )(i << 1)) / 2);
  if ((int )j != -1) {
    abort();
  }
  j = (signed char )((int )((signed char )(i * 2)) / 2);
  if ((int )j != -1) {
    abort();
  }
  i = 255;
  k = (unsigned char )((int )((unsigned char )(i << 1)) / 2);
  if ((int )k != 127) {
    abort();
  }
  k = (unsigned char )((int )((unsigned char )(i * 2)) / 2);
  if ((int )k != 127) {
    abort();
  }
  exit(0);
}
}
