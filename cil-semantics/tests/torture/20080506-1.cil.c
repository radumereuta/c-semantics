/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int main(void) 
{ unsigned int u ;
  int i ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___3 ;
  int tmp___4 ;

  {
  i = -1;
  if (i > 0) {
    tmp___1 = i;
  } else {
    tmp___1 = 0;
  }
  if ((unsigned int )tmp___1 > 1U) {
    if (i > 0) {
      tmp___0 = i;
    } else {
      tmp___0 = 0;
    }
    u = (unsigned int )tmp___0;
  } else {
    u = 1U;
  }
  if (u != 1U) {
    abort();
  }
  if (i > 0) {
    tmp___4 = i;
  } else {
    tmp___4 = 0;
  }
  if ((unsigned int )tmp___4 < (unsigned int )i) {
    if (i > 0) {
      tmp___3 = i;
    } else {
      tmp___3 = 0;
    }
    u = (unsigned int )tmp___3;
  } else {
    u = (unsigned int )i;
  }
  if (u != 0U) {
    abort();
  }
  return (0);
}
}
