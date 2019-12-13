#include <stdio.h>

int main (void) {
  int Array[] = {1,3,5,7,9};
  int *p = Array;
  int sum;

  for (int i=0;i<5;i++) {
    sum += *(p+i);
  }

  printf("total sum = %d", sum);
  return 0;
}
