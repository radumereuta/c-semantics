/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct baz {
   int a ;
   int b ;
   int c ;
   int d ;
   int e ;
};
extern void abort(void) ;
extern void exit(int  ) ;
void bar(struct baz *x , int f , int g , int h , int i , int j ) 
{ 

  {
  if (x->a != 1) {
    abort();
  } else {
    if (x->b != 2) {
      abort();
    } else {
      if (x->c != 3) {
        abort();
      } else {
        if (x->d != 4) {
          abort();
        } else {
          if (x->e != 5) {
            abort();
          } else {
            if (f != 6) {
              abort();
            } else {
              if (g != 7) {
                abort();
              } else {
                if (h != 8) {
                  abort();
                } else {
                  if (i != 9) {
                    abort();
                  } else {
                    if (j != 10) {
                      abort();
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}
}
void foo(struct baz x , char **y ) 
{ 

  {
  bar(& x, 6, 7, 8, 9, 10);
  return;
}
}
int main(void) 
{ struct baz x ;

  {
  x.a = 1;
  x.b = 2;
  x.c = 3;
  x.d = 4;
  x.e = 5;
  foo(x, (char **)0);
  exit(0);
}
}
