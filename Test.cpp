#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

void print_number(int* myInt) {
  assert (myInt!=NULL);
  printf ("%d\n",*myInt);
}

int main ()
{
  int d=10;
  int * b = NULL;
  int * c = NULL;

  b=&d;

  print_number (c);
  print_number (c);

  return 0;
}
