#include <stdlib.h>
int f(j)int j;{return++j>0;}
int main(){if(f((~0U)>>1))abort();exit(0);}
