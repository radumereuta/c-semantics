/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct __anonstruct_tp_21 {
   int f[3] ;
   double x[1][2] ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void f(double *x , double *y ) 
{ 

  {
  if ((unsigned long )x == (unsigned long )y) {
    abort();
  }
  return;
}
}
int main(void) 
{ struct __anonstruct_tp_21 tp[4][2] ;
  int i ;
  int j ;
  int ki ;
  int kj ;
  int mi ;
  int mj ;
  float bdm[4][2][4][2] ;

  {
  i = 0;
  while (i < 4) {
    j = i;
    while (j < 4) {
      ki = 0;
      while (ki < 2) {
        kj = 0;
        while (kj < 2) {
          if (j == i) {
            if (ki == kj) {
              bdm[i][ki][j][kj] = (float )1000.0;
            } else {
              goto _L;
            }
          } else {
            _L: /* CIL Label */ 
            mi = 0;
            while (mi < 1) {
              mj = 0;
              while (mj < 1) {
                f((double *)(tp[i][ki].x[mi]), (double *)(tp[j][kj].x[mj]));
                mj ++;
              }
              mi ++;
            }
            bdm[i][ki][j][kj] = (float )1000.0;
          }
          kj ++;
        }
        ki ++;
      }
      j ++;
    }
    i ++;
  }
  exit(0);
}
}
