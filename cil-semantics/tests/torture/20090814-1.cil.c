/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void abort(void) ;
int ( __attribute__((__noinline__)) bar)(int *a ) 
{ 

  {
  return (*a);
}
}
int i  ;
int ( __attribute__((__noinline__)) foo)(int (*a)[2] ) 
{ int tmp ;

  {
  tmp = bar(& (*a)[i]);
  return (tmp);
}
}
int a[2]  ;
int main(void) 
{ int tmp ;

  {
  a[0] = -1;
  a[1] = 42;
  i = 1;
  tmp = foo(& a);
  if (tmp != 42) {
    abort();
  }
  return (0);
}
}
