/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef long mpt;
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(mpt us , mpt vs ) 
{ long aus ;
  long avs ;
  long t ;

  {
  if (us >= 0L) {
    aus = us;
  } else {
    aus = - us;
  }
  if (vs >= 0L) {
    avs = vs;
  } else {
    avs = - vs;
  }
  if (aus < avs) {
    t = aus;
    aus = avs;
    avs = aus;
  }
  return ((int )avs);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f(3L, 17L);
  if (tmp != 17) {
    abort();
  }
  exit(0);
}
}
