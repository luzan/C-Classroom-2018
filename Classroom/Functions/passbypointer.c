#include <stdio.h>
 
void swapByReference(int*, int*); /* Prototype */
 
int main() /* Main function */
{
  int n1 = 10, n2 = 20;
 
  /* actual arguments will be altered */
  swapByReference(&n1, &n2);
  printf("n1: %d, n2: %d\n", n1, n2);
}
 
void swapByReference(int *a, int *b)
{
  int t;
  t = *a; *a = *b; *b = t;
}


