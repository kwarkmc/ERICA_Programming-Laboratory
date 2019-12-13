#include <stdio.h>

void SumArray(int *a, int *sum, int *diff, int size);

int main (void) {
  int Array[5];
  int *a = Array;
  int sum = 0;
  int *psum = &sum;
  int diff = 1;
  int *pdiff = &diff;
  int size = sizeof(Array)/sizeof(int);
  for (int i=0;i<size;i++) {
    printf("%d th Value is : ", i+1);
    scanf("%d", &Array[i]);
  }
  SumArray(a, psum, pdiff, size);
  printf("Sum = %d \n Multiply = %d\n", sum, diff);
  return 0;
}

void SumArray(int *a, int *sum, int *diff, int size) {
  for (int i=0;i<size;i++) {
    *sum += *(a+i);
    *diff *= *(a+i);
  }
}
