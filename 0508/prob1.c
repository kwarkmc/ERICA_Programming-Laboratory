#include <stdio.h>

int SumArray(int *p, int size);

int main (void) {
  int Array[] = {1,3,5,7,9};
  int *p = Array;
  int size = sizeof(Array)/sizeof(int);
  printf("Sum = %d\n", SumArray(p, size));
  return 0;
}

int SumArray(int *p, int size) {
  int sum = 0;
  for (int i=0;i<size;i++) {
    sum += *(p+i);
  }
  return sum;
}
