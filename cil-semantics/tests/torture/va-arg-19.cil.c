/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
typedef int TYPE;
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
void vafunction(char *dummy  , ...) 
{ va_list ap ;
  TYPE tmp ;
  TYPE tmp___0 ;
  TYPE tmp___1 ;
  TYPE tmp___2 ;
  TYPE tmp___3 ;
  TYPE tmp___4 ;
  TYPE tmp___5 ;
  TYPE tmp___6 ;
  TYPE tmp___7 ;

  {
  __builtin_va_start(ap, dummy);
  tmp = __builtin_va_arg(ap, TYPE );
  if (tmp != 1) {
    abort();
  }
  tmp___0 = __builtin_va_arg(ap, TYPE );
  if (tmp___0 != 2) {
    abort();
  }
  tmp___1 = __builtin_va_arg(ap, TYPE );
  if (tmp___1 != 3) {
    abort();
  }
  tmp___2 = __builtin_va_arg(ap, TYPE );
  if (tmp___2 != 4) {
    abort();
  }
  tmp___3 = __builtin_va_arg(ap, TYPE );
  if (tmp___3 != 5) {
    abort();
  }
  tmp___4 = __builtin_va_arg(ap, TYPE );
  if (tmp___4 != 6) {
    abort();
  }
  tmp___5 = __builtin_va_arg(ap, TYPE );
  if (tmp___5 != 7) {
    abort();
  }
  tmp___6 = __builtin_va_arg(ap, TYPE );
  if (tmp___6 != 8) {
    abort();
  }
  tmp___7 = __builtin_va_arg(ap, TYPE );
  if (tmp___7 != 9) {
    abort();
  }
  __builtin_va_end(ap);
  return;
}
}
int main(void) 
{ 

  {
  vafunction((char *)"", 1, 2, 3, 4, 5, 6, 7, 8, 9);
  exit(0);
  return (0);
}
}
