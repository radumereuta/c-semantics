/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void dummy(void) ;
int f1(unsigned int x , unsigned int y ) 
{ 

  {
  if (x == 0U) {
    dummy();
  }
  x -= y;
  if (x < ~ (4294967295U >> 1)) {
    abort();
  }
  return ((int )x);
}
}
int f2(unsigned long x , unsigned long y ) 
{ 

  {
  if (x == 0UL) {
    dummy();
  }
  x -= y;
  if (x < ~ (0xffffffffUL >> 1)) {
    abort();
  }
  return ((int )x);
}
}
void dummy(void) 
{ 

  {
  return;
}
}
int main(void) 
{ 

  {
  f1((4294967295U >> 1) - 12U, ~ (4294967295U >> 1) + 1U);
  f2((0xffffffffUL >> 1) - 12UL, ~ (0xffffffffUL >> 1) + 1UL);
  exit(0);
}
}
