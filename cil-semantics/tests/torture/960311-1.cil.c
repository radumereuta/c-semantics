/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int count  ;
void a1(void) 
{ 

  {
  count ++;
  return;
}
}
void b(unsigned char data ) 
{ 

  {
  if ((int )data & 128) {
    a1();
  }
  data = (unsigned char )((int )data << 1);
  if ((int )data & 128) {
    a1();
  }
  data = (unsigned char )((int )data << 1);
  if ((int )data & 128) {
    a1();
  }
  return;
}
}
int main(void) 
{ 

  {
  count = 0;
  b((unsigned char)0);
  if (count != 0) {
    abort();
  }
  count = 0;
  b((unsigned char)128);
  if (count != 1) {
    abort();
  }
  count = 0;
  b((unsigned char)64);
  if (count != 1) {
    abort();
  }
  count = 0;
  b((unsigned char)32);
  if (count != 1) {
    abort();
  }
  count = 0;
  b((unsigned char)192);
  if (count != 2) {
    abort();
  }
  count = 0;
  b((unsigned char)160);
  if (count != 2) {
    abort();
  }
  count = 0;
  b((unsigned char)96);
  if (count != 2) {
    abort();
  }
  count = 0;
  b((unsigned char)224);
  if (count != 3) {
    abort();
  }
  exit(0);
}
}
