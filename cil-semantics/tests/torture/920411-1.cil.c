/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
long f(char *w ) 
{ long k ;
  long i ;
  long c ;
  long x ;
  char *p ;

  {
  c = 0L;
  p = (char *)(& x);
  i = 0L;
  while (i < 1L) {
    k = 0L;
    while ((unsigned long )k < sizeof(long )) {
      *(p + k) = *(w + k);
      k ++;
    }
    c += x;
    i ++;
  }
  return (c);
}
}
int main(void) 
{ int i ;
  char a[sizeof(long )] ;
  long tmp ;

  {
  i = (int )sizeof(long );
  while (1) {
    i --;
    if (! (i >= 0)) {
      break;
    }
    a[i] = (char )' ';
  }
  tmp = f(a);
  if ((unsigned long )tmp != 0UL) {
    abort();
  }
  exit(0);
}
}
