/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct tiny {
   char c ;
   char d ;
   char e ;
   char f ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void f(int n , struct tiny x , struct tiny y , struct tiny z , long l ) 
{ 

  {
  if ((int )x.c != 10) {
    abort();
  }
  if ((int )x.d != 20) {
    abort();
  }
  if ((int )x.e != 30) {
    abort();
  }
  if ((int )x.f != 40) {
    abort();
  }
  if ((int )y.c != 11) {
    abort();
  }
  if ((int )y.d != 21) {
    abort();
  }
  if ((int )y.e != 31) {
    abort();
  }
  if ((int )y.f != 41) {
    abort();
  }
  if ((int )z.c != 12) {
    abort();
  }
  if ((int )z.d != 22) {
    abort();
  }
  if ((int )z.e != 32) {
    abort();
  }
  if ((int )z.f != 42) {
    abort();
  }
  if (l != 123L) {
    abort();
  }
  return;
}
}
int main(void) 
{ struct tiny x[3] ;

  {
  x[0].c = (char)10;
  x[1].c = (char)11;
  x[2].c = (char)12;
  x[0].d = (char)20;
  x[1].d = (char)21;
  x[2].d = (char)22;
  x[0].e = (char)30;
  x[1].e = (char)31;
  x[2].e = (char)32;
  x[0].f = (char)40;
  x[1].f = (char)41;
  x[2].f = (char)42;
  f(3, x[0], x[1], x[2], 123L);
  exit(0);
}
}
