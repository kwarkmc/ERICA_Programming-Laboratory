#include <stdio.h>

void print(int *arr, int size) {
  for (int i=0;i<size;i++) {
    printf("%4d", arr[i]);
  }
  printf("\n");
}

int main () {
  int array[10];
  int temp;
  for (int j=0;j<10;j++) {
    scanf("%d", &temp);
    array[j] = temp;
  }
  print(array, sizeof(array)/sizeof(int));
  return 0;
}

