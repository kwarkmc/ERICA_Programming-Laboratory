#include <stdio.h>

int main (void) {
  int * pointer;
  pointer = (int *)malloc(sizeof(int));
  *pointer = 5;
  return 0;
}
