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
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
__inline void debug(int i1 , int i2 , int i3 , int i4 , int i5 , int i6 , int i7 ,
                    double f1 , double f2 , double f3 , double f4 , double f5 , double f6 ,
                    double f7 , double f8 , double f9  , ...) 
{ va_list ap ;
  int tmp ;
  int tmp___0 ;
  int tmp___1 ;

  {
  __builtin_va_start(ap, f9);
  tmp = __builtin_va_arg(ap, int );
  if (tmp != 8) {
    abort();
  }
  tmp___0 = __builtin_va_arg(ap, int );
  if (tmp___0 != 9) {
    abort();
  }
  tmp___1 = __builtin_va_arg(ap, int );
  if (tmp___1 != 10) {
    abort();
  }
  __builtin_va_end(ap);
  return;
}
}
int main(void) 
{ 

  {
  debug(1, 2, 3, 4, 5, 6, 7, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 8, 9, 10);
  exit(0);
}
}
