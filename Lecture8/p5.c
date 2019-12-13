#include <stdio.h>

void Find(int *arr, int *pfirst, int *psecond);

int main (void) {
  int array[5];
  int *arr = &array;
  int first = 0, second = 0;
  int *pfirst = &first;
  int *psecond = &second;

  for (int i=0;i<5;i++) {
    printf("insert number : ");
    scanf("%d", &array[i]);
  }

  Find(arr, pfirst, psecond);
  
  printf("the largest number : %d\nsecond largest number : %d\n", first, second);
  
  return 0;
}

void Find(int *arr, int *pfirst, int *psecond) {
  for (int j=0;j<5;j++) {
    if (*pfirst < *(arr+j)) {
      *pfirst = *(arr+j);
    }
  }
  for (int k=0;k<5;k++) {
    if (!(*(arr+k) == *pfirst)) {
      if (*psecond < *(arr+k)) {
        *psecond = *(arr+k);
      }
    }
  }
}
