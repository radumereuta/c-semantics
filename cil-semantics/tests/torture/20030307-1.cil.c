/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
int fcntl_lock(int fd , int op , long long offset , long long count , int type ) ;
int vfswrap_lock(char *fsp , int fd , int op , long long offset , long long count ,
                 int type ) 
{ int tmp ;

  {
  tmp = fcntl_lock(fd, op, offset, count, type);
  return (tmp);
}
}
int fcntl_lock(int fd , int op , long long offset , long long count , int type ) 
{ 

  {
  return (type);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = vfswrap_lock((char *)0, 1, 2, 3LL, 4LL, 5);
  if (tmp != 5) {
    abort();
  }
  return (0);
}
}
