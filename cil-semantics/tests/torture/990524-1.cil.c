/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
char a[6]  = {      (char )'1',      (char )'2',      (char )'3',      (char )'4', 
        (char )'5',      (char )'\000'};
char b[6]  = {      (char )'1',      (char )'2',      (char )'3',      (char )'4', 
        (char )'5',      (char )'\000'};
void loop(char *pz , char *pzDta ) 
{ char *tmp ;
  char tmp___0 ;
  char *tmp___1 ;
  char *tmp___2 ;

  {
  while (1) {
    tmp = pz;
    pz ++;
    tmp___1 = pzDta;
    pzDta ++;
    tmp___0 = *tmp___1;
    *tmp = tmp___0;
    switch ((int )tmp___0) {
    case 0: 
    goto loopDone2;
    case 34: 
    case 92: 
    *(pz + -1) = (char )'\\';
    tmp___2 = pz;
    pz ++;
    *tmp___2 = *(pzDta + -1);
    }
  }
  loopDone2: ;
  if (a - pz != b - pzDta) {
    abort();
  }
  return;
}
}
int main(void) 
{ 

  {
  loop(a, b);
  exit(0);
}
}
