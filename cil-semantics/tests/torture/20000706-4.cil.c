/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
extern void exit(int  ) ;
int *c  ;
void bar(int b ) 
{ 

  {
  if (*c != 1) {
    abort();
  } else {
    if (b != 2) {
      abort();
    }
  }
  return;
}
}
void foo(int a , int b ) 
{ 

  {
  c = & a;
  bar(b);
  return;
}
}
int main(void) 
{ 

  {
  foo(1, 2);
  exit(0);
}
}
