/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
static int test_var  ;
void ( __attribute__((__noinline__)) not_inlinable)(void) ;
static void inlinable(void) 
{ 

  {
  test_var = -10;
  return;
}
}
void ( __attribute__((__noinline__)) not_inlinable)(void) 
{ 

  {
  inlinable();
  return;
}
}
int main(void) 
{ 

  {
  test_var = 10;
  not_inlinable();
  if (test_var == 10) {
    abort();
  }
  return (0);
}
}
