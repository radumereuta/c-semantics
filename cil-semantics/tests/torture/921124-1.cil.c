/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern void exit(int status ) ;
extern void abort(void) ;
int f(int x , double d1 , double d2 , double d3 ) 
{ 

  {
  return (x);
}
}
void g(char *b , char *s , double x , double y , int i , int j ) 
{ 

  {
  if (x != 1.0) {
    abort();
  } else {
    if (y != 2.0) {
      abort();
    } else {
      if (i != 3) {
        abort();
      } else {
        if (j != 4) {
          abort();
        }
      }
    }
  }
  return;
}
}
int main(void) 
{ int tmp ;
  int tmp___0 ;

  {
  tmp = f(4, 0.0, 0.0, 0.0);
  tmp___0 = f(3, 0.0, 0.0, 0.0);
  g((char *)"", (char *)"", 1.0, 2.0, tmp___0, tmp);
  exit(0);
}
}
