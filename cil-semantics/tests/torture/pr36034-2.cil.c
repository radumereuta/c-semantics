/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
double x[50]  = 
  {      (double )10,      (double )11,      (double )12,      (double )13, 
        (double )14,      (double )15,      (double )-1,      (double )-1, 
        (double )-1,      (double )-1,      (double )21,      (double )22, 
        (double )23,      (double )24,      (double )25,      (double )26, 
        (double )-1,      (double )-1,      (double )-1,      (double )-1, 
        (double )32,      (double )33,      (double )34,      (double )35, 
        (double )36,      (double )37,      (double )-1,      (double )-1, 
        (double )-1,      (double )-1,      (double )43,      (double )44, 
        (double )45,      (double )46,      (double )47,      (double )48, 
        (double )-1,      (double )-1,      (double )-1,      (double )-1, 
        (double )54,      (double )55,      (double )56,      (double )57, 
        (double )58,      (double )59,      (double )-1,      (double )-1, 
        (double )-1,      (double )-1};
double tmp[30]  ;
void ( __attribute__((__noinline__)) test)(void) 
{ int i ;

  {
  i = 0;
  while (i < 5) {
    tmp[i * 6] = x[i * 10];
    tmp[i * 6 + 1] = x[i * 10 + 1];
    tmp[i * 6 + 2] = x[i * 10 + 2];
    tmp[i * 6 + 3] = x[i * 10 + 3];
    tmp[i * 6 + 4] = x[i * 10 + 4];
    tmp[i * 6 + 5] = x[i * 10 + 5];
    i ++;
  }
  return;
}
}
int main(void) 
{ int i ;
  int j ;

  {
  test();
  i = 0;
  while (i < 5) {
    j = 0;
    while (j < 6) {
      if (tmp[i * 6 + j] == (double )-1) {
        abort();
      }
      j ++;
    }
    i ++;
  }
  return (0);
}
}
