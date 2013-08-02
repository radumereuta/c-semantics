/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

typedef unsigned long size_t;
typedef long __off_t;
typedef long __off64_t;
struct _IO_FILE;
struct _IO_FILE;
typedef struct _IO_FILE FILE;
struct _IO_FILE;
typedef void _IO_lock_t;
struct _IO_marker {
   struct _IO_marker *_next ;
   struct _IO_FILE *_sbuf ;
   int _pos ;
};
struct _IO_FILE {
   int _flags ;
   char *_IO_read_ptr ;
   char *_IO_read_end ;
   char *_IO_read_base ;
   char *_IO_write_base ;
   char *_IO_write_ptr ;
   char *_IO_write_end ;
   char *_IO_buf_base ;
   char *_IO_buf_end ;
   char *_IO_save_base ;
   char *_IO_backup_base ;
   char *_IO_save_end ;
   struct _IO_marker *_markers ;
   struct _IO_FILE *_chain ;
   int _fileno ;
   int _flags2 ;
   __off_t _old_offset ;
   unsigned short _cur_column ;
   signed char _vtable_offset ;
   char _shortbuf[1] ;
   _IO_lock_t *_lock ;
   __off64_t _offset ;
   void *__pad1 ;
   void *__pad2 ;
   void *__pad3 ;
   void *__pad4 ;
   size_t __pad5 ;
   int _mode ;
   char _unused2[(15UL * sizeof(int ) - 4UL * sizeof(void *)) - sizeof(size_t )] ;
};
extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
extern struct _IO_FILE *stderr ;
extern int fprintf(FILE * __restrict  __stream , char const   * __restrict  __format 
                   , ...) ;
float fp_add(float a , float b ) 
{ 

  {
  return (a + b);
}
}
float fp_sub(float a , float b ) 
{ 

  {
  return (a - b);
}
}
float fp_mul(float a , float b ) 
{ 

  {
  return (a * b);
}
}
float fp_div(float a , float b ) 
{ 

  {
  return (a / b);
}
}
float fp_neg(float a ) 
{ 

  {
  return (- a);
}
}
double dp_add(double a , double b ) 
{ 

  {
  return (a + b);
}
}
double dp_sub(double a , double b ) 
{ 

  {
  return (a - b);
}
}
double dp_mul(double a , double b ) 
{ 

  {
  return (a * b);
}
}
double dp_div(double a , double b ) 
{ 

  {
  return (a / b);
}
}
double dp_neg(double a ) 
{ 

  {
  return (- a);
}
}
double fp_to_dp(float f ) 
{ 

  {
  return ((double )f);
}
}
float dp_to_fp(double d ) 
{ 

  {
  return ((float )d);
}
}
int eqsf2(float a , float b ) 
{ 

  {
  return (a == b);
}
}
int nesf2(float a , float b ) 
{ 

  {
  return (a != b);
}
}
int gtsf2(float a , float b ) 
{ 

  {
  return (a > b);
}
}
int gesf2(float a , float b ) 
{ 

  {
  return (a >= b);
}
}
int ltsf2(float a , float b ) 
{ 

  {
  return (a < b);
}
}
int lesf2(float a , float b ) 
{ 

  {
  return (a <= b);
}
}
int eqdf2(double a , double b ) 
{ 

  {
  return (a == b);
}
}
int nedf2(double a , double b ) 
{ 

  {
  return (a != b);
}
}
int gtdf2(double a , double b ) 
{ 

  {
  return (a > b);
}
}
int gedf2(double a , double b ) 
{ 

  {
  return (a >= b);
}
}
int ltdf2(double a , double b ) 
{ 

  {
  return (a < b);
}
}
int ledf2(double a , double b ) 
{ 

  {
  return (a <= b);
}
}
float floatsisf(int i ) 
{ 

  {
  return ((float )i);
}
}
double floatsidf(int i ) 
{ 

  {
  return ((double )i);
}
}
int fixsfsi(float f ) 
{ 

  {
  return ((int )f);
}
}
int fixdfsi(double d ) 
{ 

  {
  return ((int )d);
}
}
unsigned int fixunssfsi(float f ) 
{ 

  {
  return ((unsigned int )f);
}
}
unsigned int fixunsdfsi(double d ) 
{ 

  {
  return ((unsigned int )d);
}
}
int fail_count  =    0;
int fail(char *msg ) 
{ 

  {
  fail_count ++;
  fprintf((FILE * __restrict  )stderr, (char const   * __restrict  )"Test failed: %s\n",
          msg);
  return (0);
}
}
int main(void) 
{ float tmp ;
  float tmp___0 ;
  float tmp___1 ;
  float tmp___2 ;
  float tmp___3 ;
  double tmp___4 ;
  double tmp___5 ;
  double tmp___6 ;
  double tmp___7 ;
  double tmp___8 ;
  double tmp___9 ;
  float tmp___10 ;
  float tmp___11 ;
  double tmp___12 ;
  int tmp___13 ;
  unsigned int tmp___14 ;
  int tmp___15 ;
  unsigned int tmp___16 ;
  int tmp___17 ;
  int tmp___18 ;
  int tmp___19 ;
  int tmp___20 ;
  int tmp___21 ;
  int tmp___22 ;
  int tmp___23 ;
  int tmp___24 ;
  int tmp___25 ;
  int tmp___26 ;
  int tmp___27 ;
  int tmp___28 ;
  int tmp___29 ;
  int tmp___30 ;
  int tmp___31 ;
  int tmp___32 ;

  {
  tmp = fp_add((float )1, (float )1);
  if (tmp != (float )2) {
    fail((char *)"fp_add 1+1");
  }
  tmp___0 = fp_sub((float )3, (float )2);
  if (tmp___0 != (float )1) {
    fail((char *)"fp_sub 3-2");
  }
  tmp___1 = fp_mul((float )2, (float )3);
  if (tmp___1 != (float )6) {
    fail((char *)"fp_mul 2*3");
  }
  tmp___2 = fp_div((float )3, (float )2);
  if ((double )tmp___2 != 1.5) {
    fail((char *)"fp_div 3/2");
  }
  tmp___3 = fp_neg((float )1);
  if (tmp___3 != (float )-1) {
    fail((char *)"fp_neg 1");
  }
  tmp___4 = dp_add((double )1, (double )1);
  if (tmp___4 != (double )2) {
    fail((char *)"dp_add 1+1");
  }
  tmp___5 = dp_sub((double )3, (double )2);
  if (tmp___5 != (double )1) {
    fail((char *)"dp_sub 3-2");
  }
  tmp___6 = dp_mul((double )2, (double )3);
  if (tmp___6 != (double )6) {
    fail((char *)"dp_mul 2*3");
  }
  tmp___7 = dp_div((double )3, (double )2);
  if (tmp___7 != 1.5) {
    fail((char *)"dp_div 3/2");
  }
  tmp___8 = dp_neg((double )1);
  if (tmp___8 != (double )-1) {
    fail((char *)"dp_neg 1");
  }
  tmp___9 = fp_to_dp((float )1.5);
  if (tmp___9 != 1.5) {
    fail((char *)"fp_to_dp 1.5");
  }
  tmp___10 = dp_to_fp(1.5);
  if ((double )tmp___10 != 1.5) {
    fail((char *)"dp_to_fp 1.5");
  }
  tmp___11 = floatsisf(1);
  if (tmp___11 != (float )1) {
    fail((char *)"floatsisf 1");
  }
  tmp___12 = floatsidf(1);
  if (tmp___12 != (double )1) {
    fail((char *)"floatsidf 1");
  }
  tmp___13 = fixsfsi((float )1.42);
  if (tmp___13 != 1) {
    fail((char *)"fixsfsi 1.42");
  }
  tmp___14 = fixunssfsi((float )1.42);
  if (tmp___14 != 1U) {
    fail((char *)"fixunssfsi 1.42");
  }
  tmp___15 = fixdfsi(1.42);
  if (tmp___15 != 1) {
    fail((char *)"fixdfsi 1.42");
  }
  tmp___16 = fixunsdfsi(1.42);
  if (tmp___16 != 1U) {
    fail((char *)"fixunsdfsi 1.42");
  }
  tmp___17 = eqsf2((float )1, (float )1);
  if (tmp___17 == 0) {
    fail((char *)"eqsf2 1==1");
  }
  tmp___18 = eqsf2((float )1, (float )2);
  if (tmp___18 != 0) {
    fail((char *)"eqsf2 1==2");
  }
  tmp___19 = nesf2((float )1, (float )2);
  if (tmp___19 == 0) {
    fail((char *)"nesf2 1!=1");
  }
  tmp___20 = nesf2((float )1, (float )1);
  if (tmp___20 != 0) {
    fail((char *)"nesf2 1!=1");
  }
  tmp___21 = gtsf2((float )2, (float )1);
  if (tmp___21 == 0) {
    fail((char *)"gtsf2 2>1");
  }
  tmp___22 = gtsf2((float )1, (float )1);
  if (tmp___22 != 0) {
    fail((char *)"gtsf2 1>1");
  }
  tmp___23 = gtsf2((float )0, (float )1);
  if (tmp___23 != 0) {
    fail((char *)"gtsf2 0>1");
  }
  tmp___24 = gesf2((float )2, (float )1);
  if (tmp___24 == 0) {
    fail((char *)"gesf2 2>=1");
  }
  tmp___25 = gesf2((float )1, (float )1);
  if (tmp___25 == 0) {
    fail((char *)"gesf2 1>=1");
  }
  tmp___26 = gesf2((float )0, (float )1);
  if (tmp___26 != 0) {
    fail((char *)"gesf2 0>=1");
  }
  tmp___27 = ltsf2((float )1, (float )2);
  if (tmp___27 == 0) {
    fail((char *)"ltsf2 1<2");
  }
  tmp___28 = ltsf2((float )1, (float )1);
  if (tmp___28 != 0) {
    fail((char *)"ltsf2 1<1");
  }
  tmp___29 = ltsf2((float )1, (float )0);
  if (tmp___29 != 0) {
    fail((char *)"ltsf2 1<0");
  }
  tmp___30 = lesf2((float )1, (float )2);
  if (tmp___30 == 0) {
    fail((char *)"lesf2 1<=2");
  }
  tmp___31 = lesf2((float )1, (float )1);
  if (tmp___31 == 0) {
    fail((char *)"lesf2 1<=1");
  }
  tmp___32 = lesf2((float )1, (float )0);
  if (tmp___32 != 0) {
    fail((char *)"lesf2 1<=0");
  }
  if (fail_count != 0) {
    abort();
  }
  exit(0);
}
}
