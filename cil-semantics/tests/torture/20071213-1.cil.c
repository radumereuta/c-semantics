/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
void h(int x , va_list ap ) 
{ int tmp ;
  int tmp___0 ;
  int tmp___1 ;
  int tmp___2 ;

  {
  switch (x) {
  case 1: 
  tmp = __builtin_va_arg(ap, int );
  if (tmp != 3) {
    abort();
  } else {
    tmp___0 = __builtin_va_arg(ap, int );
    if (tmp___0 != 4) {
      abort();
    }
  }
  return;
  case 5: 
  tmp___1 = __builtin_va_arg(ap, int );
  if (tmp___1 != 9) {
    abort();
  } else {
    tmp___2 = __builtin_va_arg(ap, int );
    if (tmp___2 != 10) {
      abort();
    }
  }
  return;
  default: 
  abort();
  }
}
}
void f1(int i , long long j  , ...) 
{ va_list ap ;

  {
  __builtin_va_start(ap, j);
  h(i, ap);
  if (i != 1) {
    abort();
  } else {
    if (j != 2LL) {
      abort();
    }
  }
  __builtin_va_end(ap);
  return;
}
}
void f2(int i , int j , int k , long long l  , ...) 
{ va_list ap ;

  {
  __builtin_va_start(ap, l);
  h(i, ap);
  if (i != 5) {
    abort();
  } else {
    if (j != 6) {
      abort();
    } else {
      if (k != 7) {
        abort();
      } else {
        if (l != 8LL) {
          abort();
        }
      }
    }
  }
  __builtin_va_end(ap);
  return;
}
}
int main(void) 
{ 

  {
  f1(1, 2LL, 3, 4);
  f2(5, 6, 7, 8LL, 9, 10);
  return (0);
}
}
