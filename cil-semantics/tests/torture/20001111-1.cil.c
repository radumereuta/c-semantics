/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void exit(int status ) ;
extern void abort(void) ;
static int next_buffer  =    0;
void bar(void) ;
static int u  =    0;
long foo(unsigned int offset ) 
{ unsigned int i ;
  unsigned int buffer ;
  char *data ;

  {
  i = (unsigned int )u;
  if (i) {
    return ((long )(i * 52783U));
  }
  buffer = (unsigned int )next_buffer;
  data = (char *)(buffer * 52783U);
  i = 0U;
  while (i < 2U) {
    bar();
    i ++;
  }
  buffer = (unsigned int )next_buffer;
  return ((long )(buffer * 52783U + offset));
}
}
void bar(void) 
{ 

  {
  return;
}
}
int main(void) 
{ long tmp ;
  long tmp___0 ;

  {
  tmp = foo(3U);
  if (tmp != 3L) {
    abort();
  }
  next_buffer = 1;
  tmp___0 = foo(2U);
  if (tmp___0 != 52785L) {
    abort();
  }
  exit(0);
}
}
