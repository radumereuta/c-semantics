/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct baz {
   int a ;
   int b ;
   int c ;
};
extern void abort(void) ;
extern void exit(int  ) ;
void foo(int a , int b , int c ) 
{ 

  {
  if (a != 4) {
    abort();
  }
  return;
}
}
void bar(struct baz x , int b , int c ) 
{ 

  {
  foo(x.b, b, c);
  return;
}
}
int main(void) 
{ struct baz x ;

  {
  x.a = 3;
  x.b = 4;
  x.c = 5;
  bar(x, 1, 2);
  exit(0);
}
}
