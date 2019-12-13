#include <stdio.h>

void FindMax(int *parray, int *pmax);

int main (void) {
  int array[10];
  int max=0;
  int *parray = array;
  int *pmax = &max;

  printf("Array ->\n");
  for (int i=0;i<10;i++) {
    scanf("%d", &array[i]);
  }
  
  FindMax(parray, pmax);

  printf("Max Value = %d\n", max);
  return 0;
}

void FindMax(int *parray, int *pmax) {
  for (int j=0;j<10;j++) {
    if (*(parray + j) > *pmax) {
      *pmax = *(parray + j);
    }
  }
}
