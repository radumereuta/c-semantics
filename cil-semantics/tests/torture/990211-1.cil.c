/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
void func(int i ) 
{ 

  {
  if (i < 0) {
    if (i >= 0) {
      abort();
    }
  }
  if (i > 0) {
    if (i <= 0) {
      abort();
    }
  }
  if (i >= 0) {
    if (i < 0) {
      abort();
    }
  }
  if (i <= 0) {
    if (i > 0) {
      abort();
    }
  }
  if (i < 77) {
    if (i >= 77) {
      abort();
    }
  }
  if (i > 77) {
    if (i <= 77) {
      abort();
    }
  }
  if (i >= 77) {
    if (i < 77) {
      abort();
    }
  }
  if (i <= 77) {
    if (i > 77) {
      abort();
    }
  }
  if (! (i < 0)) {
    if (! (i >= 0)) {
      abort();
    }
  }
  if (! (i > 0)) {
    if (! (i <= 0)) {
      abort();
    }
  }
  if (! (i >= 0)) {
    if (! (i < 0)) {
      abort();
    }
  }
  if (! (i <= 0)) {
    if (! (i > 0)) {
      abort();
    }
  }
  if (! (i < 77)) {
    if (! (i >= 77)) {
      abort();
    }
  }
  if (! (i > 77)) {
    if (! (i <= 77)) {
      abort();
    }
  }
  if (! (i >= 77)) {
    if (! (i < 77)) {
      abort();
    }
  }
  if (! (i <= 77)) {
    if (! (i > 77)) {
      abort();
    }
  }
  return;
}
}
int main(void) 
{ 

  {
  func(0);
  func(1);
  return (0);
}
}
