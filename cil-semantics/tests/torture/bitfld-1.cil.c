/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct x {
   int i : 7 ;
   unsigned int u : 7 ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int main(int argc , char **argv ) 
{ struct x bit ;
  unsigned int u ;
  int i ;
  unsigned int unsigned_result ;
  int signed_result ;

  {
  unsigned_result = 44U;
  signed_result = -13;
  bit.u = 61U;
  u = 61U;
  bit.i = -13;
  i = -13;
  if ((unsigned int )i % u != unsigned_result) {
    abort();
  }
  if ((unsigned int )i % u != unsigned_result) {
    abort();
  }
  if ((unsigned int )i % bit.u != (unsigned int )signed_result) {
    abort();
  }
  if ((unsigned int )bit.i % bit.u != (unsigned int )signed_result) {
    abort();
  }
  if ((unsigned int )i % bit.u != unsigned_result) {
    abort();
  }
  if ((unsigned int )bit.i % bit.u != unsigned_result) {
    abort();
  }
  return (0);
}
}
