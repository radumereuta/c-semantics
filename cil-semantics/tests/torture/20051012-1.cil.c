/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct type {
   int *a ;
   int b : 16 ;
   unsigned int p : 9 ;
};
extern void abort(void) ;
struct type t  ;
unsigned int foo(struct type q ) 
{ 

  {
  return (t.p);
}
}
int main(void) 
{ unsigned int tmp ;

  {
  t.p = 8U;
  tmp = foo(t);
  if (tmp != 8U) {
    abort();
  }
  return (0);
}
}
