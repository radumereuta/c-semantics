/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
unsigned char x  =    (unsigned char)50;
short volatile   y  =    (short volatile   )-5;
int main(void) 
{ 

  {
  x = (unsigned char )((int )x / (int )y);
  if ((int )x != 246) {
    abort();
  }
  exit(0);
}
}
