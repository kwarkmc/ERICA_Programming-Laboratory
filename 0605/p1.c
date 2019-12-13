#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int * array;
  array = (int *)malloc(10*sizeof(int));
  for (int i=0;i<10;i++) {
    array[i] = i;
  }
  for (int j=0;j<10;j++) {
    printf("array[%d] = %d\n", j, array[j]);
  }
  return 0;
}
