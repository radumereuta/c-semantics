#include <stdio.h>

struct list { int hd; struct list * tl; };

struct list * f(struct list ** p)
{
  return ((*p)->tl = 0);
}

int main(int argc, char ** argv)
{
  struct list l;
  l.tl = &l;
  f(&(l.tl));
  printf("VOLATILE Result: %p\n", l.tl);
  if (l.tl != NULL){
	printf("BUG\n");
  }
  return 0;
}
