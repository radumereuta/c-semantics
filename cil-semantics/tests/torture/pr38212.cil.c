/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
int ( __attribute__((__noinline__)) foo)(int * __restrict  p , int i ) 
{ int * __restrict  q ;
  int * __restrict  r ;
  int v ;
  int w ;

  {
  q = p + 1;
  r = q - i;
  v = *r;
  *p = 1;
  w = *r;
  return (v + w);
}
}
int main(void) 
{ int i ;
  int tmp ;

  {
  i = 0;
  tmp = foo((int * __restrict  )(& i), 1);
  if (tmp != 1) {
    abort();
  }
  return (0);
}
}
