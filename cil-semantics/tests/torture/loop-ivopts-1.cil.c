/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

void foo(float *x ) ;
int main(void) 
{ float x[4] ;

  {
  foo(x);
  return (0);
}
}
void foo(float *x ) ;
static float t16[16]  = 
  {      (float )1.,      (float )2.,      (float )3.,      (float )4., 
        (float )5.,      (float )6.,      (float )7.,      (float )8., 
        (float )9.,      (float )10.,      (float )11.,      (float )12., 
        (float )13.,      (float )14.,      (float )15.,      (float )16.};
void foo(float *x ) ;
static float tmp[4]  = {      (float )0.,      (float )0.,      (float )0.,      (float )0.};
void foo(float *x ) 
{ int i ;
  int j ;
  int k ;
  float temp ;

  {
  i = 0;
  while (i < 4) {
    k = 3 - i;
    temp = t16[5 * k];
    j = k + 1;
    while (j < 4) {
      tmp[k] = t16[k + j * 4] * temp;
      j ++;
    }
    i ++;
  }
  *(x + 0) = tmp[0];
  *(x + 1) = tmp[1];
  *(x + 2) = tmp[2];
  *(x + 3) = tmp[3];
  return;
}
}
