/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct A {
   int i ;
   int j ;
};
struct B {
   struct A *a ;
   struct A *b ;
};
struct C {
   struct B *c ;
   struct A *d ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
static struct A __constr_expr_1  =    {1, 2};
static struct A __constr_expr_2  =    {3, 4};
static struct B __constr_expr_0  =    {& __constr_expr_1, & __constr_expr_2};
static struct A __constr_expr_3  =    {5, 6};
struct C e  =    {& __constr_expr_0, & __constr_expr_3};
int main(void) 
{ 

  {
  if (((e.c)->a)->i != 1) {
    abort();
  } else {
    if (((e.c)->a)->j != 2) {
      abort();
    }
  }
  if (((e.c)->b)->i != 3) {
    abort();
  } else {
    if (((e.c)->b)->j != 4) {
      abort();
    }
  }
  if ((e.d)->i != 5) {
    abort();
  } else {
    if ((e.d)->j != 6) {
      abort();
    }
  }
  return (0);
}
}