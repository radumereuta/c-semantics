/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct D {
   int d1 ;
   struct D *d2 ;
};
struct C {
   struct D c1 ;
   long c2 ;
   long c3 ;
   long c4 ;
   long c5 ;
   long c6 ;
};
struct A {
   struct A *a1 ;
   struct C *a2 ;
};
struct B {
   struct C b1 ;
   struct A *b2 ;
};
extern void abort(void) ;
extern void exit(int  ) ;
void foo(struct B *x , struct B *y ) 
{ struct A *a ;

  {
  if ((unsigned long )x->b2 == (unsigned long )((struct A *)0)) {
    a = y->b2;
    x->b2 = a;
    y->b2 = (struct A *)0;
    while (a) {
      a->a2 = & x->b1;
      a = a->a1;
    }
  }
  if ((unsigned long )y->b2 != (unsigned long )((struct A *)0)) {
    abort();
  }
  if (x->b1.c3 == -1L) {
    x->b1.c3 = y->b1.c3;
    x->b1.c4 = y->b1.c4;
    y->b1.c3 = -1L;
    y->b1.c4 = 0L;
  }
  if (y->b1.c3 != -1L) {
    abort();
  }
  return;
}
}
struct B x  ;
struct B y  ;
int main(void) 
{ 

  {
  y.b1.c1.d1 = 6;
  y.b1.c3 = 145L;
  y.b1.c4 = 2448L;
  x.b1.c3 = -1L;
  foo(& x, & y);
  exit(0);
}
}