/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
void link_failure(void) ;
int volatile   v  ;
void foo(int var ) 
{ 

  {
  if (! (var <= 0)) {
    if (! ((unsigned long )((unsigned int )(var - 1)) < 4294967295UL)) {
      link_failure();
    }
  }
  return;
}
}
int main(int argc , char **argv ) 
{ 

  {
  foo((int )v);
  return (0);
}
}
void link_failure(void) 
{ 

  {
  abort();
}
}