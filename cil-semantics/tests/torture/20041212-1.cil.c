/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void exit(int status ) ;
extern void abort(void) ;
void *( __attribute__((__noinline__)) f)(void) ;
void *( __attribute__((__noinline__)) f)(void) 
{ 

  {
  return ((void *)(& f));
}
}
int main(void) 
{ void *tmp ;

  {
  tmp = f();
  if ((unsigned long )tmp != (unsigned long )(& f)) {
    abort();
  }
  exit(0);
}
}
