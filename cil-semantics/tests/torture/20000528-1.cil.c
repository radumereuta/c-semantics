/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
unsigned long l  =    0xfffffffeUL;
unsigned short s  ;
int main(void) 
{ long t ;

  {
  t = (long )l;
  s = (unsigned short )t;
  if ((int )s != 65534) {
    abort();
  }
  exit(0);
}
}
