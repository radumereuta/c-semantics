/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
struct A {
   int a ;
   int b ;
};
typedef struct A A;
struct B {
   struct A **a ;
   int b ;
};
typedef struct B B;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern size_t strlen(char const   *s ) ;
A *a  ;
int b  =    1;
int c  ;
B d[1]  ;
void foo(A *x , char const   *y , int z ) 
{ 

  {
  c = (int )((int const   )*(y + 4) + (int const   )(z * 25));
  return;
}
}
A *bar(char const   *v , int w , int x , char const   *y , int z ) 
{ 

  {
  if (w) {
    abort();
  }
  exit(0);
}
}
void test(char const   *x , int *y ) 
{ size_t tmp ;
  int tmp___0 ;

  {
  foo(*(d[0].a + d[0].b), "test", 200);
  tmp = strlen(x);
  if (b) {
    tmp___0 = 0;
  } else {
    tmp___0 = 65536;
  }
  *(d[0].a + d[0].b) = bar(x, tmp___0, (int )tmp, "test", 201);
  ((*(d[0].a + d[0].b))->a) ++;
  if (y) {
    (*(d[0].a + d[0].b))->b = *y;
  }
  return;
}
}
int main(void) 
{ 

  {
  d[0].b = 0;
  d[0].a = & a;
  test("", (int *)0);
  return (0);
}
}
