/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct bovid {
   float red ;
   int green ;
   void *blue ;
};
static int ( __attribute__((__noinline__)) ox)(int fail , struct bovid *cow ) 
{ int r ;

  {
  if (fail) {
    r = (int )cow->red;
  } else {
    r = 0;
  }
  return (r);
}
}
int main(int argc , char **argv ) 
{ int r ;

  {
  r = ox(argc > 2000, (struct bovid *)((void *)0));
  return (r);
}
}
