/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int main(void) 
{ int ll_bitsize ;
  int ll_bitpos ;
  int rl_bitsize ;
  int rl_bitpos ;
  int end_bit ;

  {
  ll_bitpos = 32;
  ll_bitsize = 32;
  rl_bitpos = 0;
  rl_bitsize = 32;
  if (ll_bitpos + ll_bitsize > rl_bitpos + rl_bitsize) {
    end_bit = ll_bitpos + ll_bitsize;
  } else {
    end_bit = rl_bitpos + rl_bitsize;
  }
  if (end_bit != 64) {
    abort();
  }
  if (rl_bitpos + rl_bitsize > ll_bitpos + ll_bitsize) {
    end_bit = rl_bitpos + rl_bitsize;
  } else {
    end_bit = ll_bitpos + ll_bitsize;
  }
  if (end_bit != 64) {
    abort();
  }
  if (ll_bitpos + ll_bitsize < rl_bitpos + rl_bitsize) {
    end_bit = ll_bitpos + ll_bitsize;
  } else {
    end_bit = rl_bitpos + rl_bitsize;
  }
  if (end_bit != 32) {
    abort();
  }
  if (rl_bitpos + rl_bitsize < ll_bitpos + ll_bitsize) {
    end_bit = rl_bitpos + rl_bitsize;
  } else {
    end_bit = ll_bitpos + ll_bitsize;
  }
  if (end_bit != 32) {
    abort();
  }
  return (0);
}
}
