/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct foo {
   int i ;
   int j ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int bar(struct foo *k , int k2 , int f , int f2 ) 
{ int *p ;
  int *q ;
  int res ;

  {
  if (f) {
    p = & k->i;
  } else {
    p = & k->j;
  }
  res = *p;
  k->i = 1;
  if (f2) {
    q = p;
  } else {
    q = & k2;
  }
  return (res + *q);
}
}
int main(void) 
{ struct foo k ;
  int tmp ;

  {
  k.i = 0;
  k.j = 1;
  tmp = bar(& k, 1, 1, 1);
  if (tmp != 1) {
    abort();
  }
  return (0);
}
}
