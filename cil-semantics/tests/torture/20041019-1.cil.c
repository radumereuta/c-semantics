/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int test_store_ccp(int i ) 
{ int *p ;
  int a ;
  int b ;
  int c ;

  {
  if (i < 5) {
    p = & a;
  } else {
    if (i > 8) {
      p = & b;
    } else {
      p = & c;
    }
  }
  *p = 10;
  b = 3;
  return (*p + 2);
}
}
int test_store_copy_prop(int i ) 
{ int *p ;
  int a ;
  int b ;
  int c ;

  {
  if (i < 5) {
    p = & a;
  } else {
    if (i > 8) {
      p = & b;
    } else {
      p = & c;
    }
  }
  *p = i;
  b = i + 1;
  return (*p);
}
}
int main(void) 
{ int x ;

  {
  x = test_store_ccp(10);
  if (x == 12) {
    abort();
  }
  x = test_store_copy_prop(9);
  if (x == 9) {
    abort();
  }
  return (0);
}
}
