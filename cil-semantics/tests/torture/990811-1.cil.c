/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct s {
   long a ;
   int b ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int foo(int x , void *y ) 
{ 

  {
  switch (x) {
  case 0: 
  return ((int )((struct s *)y)->a);
  case 1: 
  return ((int )*((signed char *)y));
  case 2: 
  return ((int )*((short *)y));
  }
  abort();
}
}
int main(void) 
{ struct s s ;
  short sh[10] ;
  signed char c[10] ;
  int i ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  s.a = 1L;
  s.b = 2;
  i = 0;
  while (i < 10) {
    sh[i] = (short )i;
    c[i] = (signed char )i;
    i ++;
  }
  tmp = foo(0, (void *)(& s));
  if (tmp != 1) {
    abort();
  }
  tmp___0 = foo(1, (void *)(c + 3));
  if (tmp___0 != 3) {
    abort();
  }
  tmp___1 = foo(2, (void *)(sh + 3));
  if (tmp___1 != 3) {
    abort();
  }
  exit(0);
}
}
