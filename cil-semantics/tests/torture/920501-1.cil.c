/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void exit(int status ) ;
extern void abort(void) ;
int s[2]  ;
int x(int q ) 
{ 

  {
  if (! s[0]) {
    s[1 + s[1]] = s[1];
    return (1);
  }
  return (0);
}
}
int main(void) 
{ int tmp ;

  {
  s[1] = 0;
  s[0] = s[1];
  tmp = x(0);
  if (tmp != 1) {
    abort();
  }
  exit(0);
}
}
