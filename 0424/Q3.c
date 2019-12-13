#include <stdio.h>

void swap(int*x, int*y);

int main (void) {
  int i=30, j=80;
  int *pi, *pj;
  pi = &i;
  pj = &j;
  swap(pi, pj);
  printf("i=%d j=%d \n", i, j);
  return 0;
}

void swap(int*x, int*y) {
  int temp;
  temp = *x;
  *x=*y;
  *y=temp;
}
