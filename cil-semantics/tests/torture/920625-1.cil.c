/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef __builtin_va_list __gnuc_va_list;
typedef __gnuc_va_list va_list;
struct __anonstruct_point_21 {
   double x ;
   double y ;
};
typedef struct __anonstruct_point_21 point;
struct __anonstruct_ipoint_22 {
   int x ;
   int y ;
};
typedef struct __anonstruct_ipoint_22 ipoint;
/* compiler builtin: 
   void __builtin_va_end(__builtin_va_list  ) ;  */
/* compiler builtin: 
   void __builtin_va_arg(__builtin_va_list  , unsigned long  , void * ) ;  */
/* compiler builtin: 
   void __builtin_va_start(__builtin_va_list  ) ;  */
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
point pts[4]  = {      {1.0, 2.0}, 
        {3.0, 4.0}, 
        {5.0, 6.0}, 
        {7.0, 8.0}};
static int va1(int nargs  , ...) 
{ va_list args ;
  int i ;
  point pi ;

  {
  __builtin_va_start(args, nargs);
  i = 0;
  while (i < nargs) {
    pi = __builtin_va_arg(args, point );
    if (pts[i].x != pi.x) {
      abort();
    } else {
      if (pts[i].y != pi.y) {
        abort();
      }
    }
    i ++;
  }
  __builtin_va_end(args);
  return (0);
}
}
ipoint ipts[4]  = {      {1, 2}, 
        {3, 4}, 
        {5, 6}, 
        {7, 8}};
static int va2(int nargs  , ...) 
{ va_list args ;
  int i ;
  ipoint pi ;

  {
  __builtin_va_start(args, nargs);
  i = 0;
  while (i < nargs) {
    pi = __builtin_va_arg(args, ipoint );
    if (ipts[i].x != pi.x) {
      abort();
    } else {
      if (ipts[i].y != pi.y) {
        abort();
      }
    }
    i ++;
  }
  __builtin_va_end(args);
  return (0);
}
}
int main(void) 
{ 

  {
  va1(4, pts[0], pts[1], pts[2], pts[3]);
  va2(4, ipts[0], ipts[1], ipts[2], ipts[3]);
  exit(0);
}
}
