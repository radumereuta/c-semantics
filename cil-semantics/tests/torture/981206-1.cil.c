/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
static unsigned short x  ;
static unsigned short y  ;
void foo(void) 
{ 

  {
  x = (unsigned short)837;
  y = (unsigned short)1383;
  return;
}
}
int main(void) 
{ 

  {
  foo();
  if ((int )x != 837) {
    abort();
  } else {
    if ((int )y != 1383) {
      abort();
    }
  }
  exit(0);
}
}
