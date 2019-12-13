#include <stdio.h>

int SumArray(int *p, int size);

int main (void) {
  int array[] = {1,3,5,7,9};
  int *p = array;
  int size = sizeof(array)/sizeof(int);
  printf("total sum : %d\n", SumArray(p, size));
  return 0;
}

int SumArray(int *p, int size) {
  int sum = 0;
  for (int i=0;i<size;i++) {
    sum += *(p+i);
  }
  return sum;
}
