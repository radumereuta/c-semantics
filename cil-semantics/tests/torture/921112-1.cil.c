/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_t_21 {
   int i1 ;
   int i2 ;
};
union u {
   struct __anonstruct_t_21 t ;
   double d ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
union u x[2]  ;
union u v  ;
void f(union u *x___0 , union u v___0 ) 
{ 

  {
  x___0 ++;
  *x___0 = v___0;
  return;
}
}
int main(void) 
{ 

  {
  x[1].t.i2 = 0;
  x[1].t.i1 = x[1].t.i2;
  v.t.i1 = 1;
  v.t.i2 = 2;
  f(x, v);
  if (x[1].t.i1 != 1) {
    abort();
  } else {
    if (x[1].t.i2 != 2) {
      abort();
    }
  }
  exit(0);
}
}
