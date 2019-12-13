#include <stdio.h>

int SumArray(int *p, int scale);

int main (void) {
  int array[] = {1,3,5,7,9};
  int *p = array;
  printf ("Sum = %d\n",SumArray(p, sizeof(array)/sizeof(int)));
}

int SumArray(int *p, int scale) {
  int sum = 0;
  for (int i=0;i<scale;i++) {
    sum += *(p+i);
  }
  return sum;
}

