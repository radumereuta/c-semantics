/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

enum __anonenum_B_1 {
    C = 1,
    D = 2
} ;
typedef enum __anonenum_B_1 B;
struct S {
   B /* mode(byte) */   a ;
   B /* mode(byte) */   b ;
};
extern void abort(void) ;
void foo(struct S *x ) 
{ 

  {
  if ((unsigned int /* mode(byte) */   )x->a != (unsigned int /* mode(byte) */   )1) {
    abort();
  } else {
    if ((unsigned int /* mode(byte) */   )x->b != (unsigned int /* mode(byte) */   )2) {
      abort();
    }
  }
  return;
}
}
int main(void) 
{ struct S s ;

  {
  s.a = (enum __anonenum_B_1  /* mode(byte) */  )1;
  s.b = (enum __anonenum_B_1  /* mode(byte) */  )2;
  foo(& s);
  return (0);
}
}
