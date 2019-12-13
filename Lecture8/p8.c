#include <stdio.h>

int main (void) {
  int arr[] = {10,20,30,40,50};
  int *parr = &arr;
  printf("------original array------");
  for (int i=0;i<5;i++) {
    printf("%4d", arr[i]);
  }
  printf("\n");

  for (int j=0;j<5;j++) {
    *(parr+j) += j+1;
  }
  printf("------array after addition------");
  for (int k=0;k<5;k++) {
    printf("%4d", arr[k]);
  }
  printf("\n");
  return 0;
}
