/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void exit(int  ) ;
extern void abort(void) ;
int volatile   a  =    (int volatile   )1;
int volatile   b  =    (int volatile   )0;
int volatile   x  =    (int volatile   )2;
int volatile   r  =    (int volatile   )8;
void ( __attribute__((__noinline__)) foo)(void) 
{ 

  {
  exit(0);
}
}
int main(void) 
{ int si1 ;
  int si2 ;
  int i ;

  {
  si1 = (int )a;
  si2 = (int )b;
  i = 0;
  while (i < 100) {
    foo();
    if (x == (int volatile   )8) {
      i ++;
    }
    r += (int volatile   )(i + si1 % si2);
    i ++;
  }
  abort();
  return (0);
}
}
