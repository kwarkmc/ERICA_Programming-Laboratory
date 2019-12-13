#include <stdio.h>

void FindValue(int size, int *arr, int *plargest, int *psec_largest);

int main (void) {
  int Array[5];
  int *arr = Array;
  int largest, sec_largest;
  int *plargest = &largest;
  int *psec_largest = &sec_largest;
  int size = sizeof(Array)/sizeof(int);

  for (int i=0;i<size;i++) {
    printf("insert %d th number : ", i+1);
    scanf("%d", &Array[i]);
  }

  FindValue(size, arr, plargest, psec_largest);

  printf("The largest number : %d\n", largest);
  printf("Second largest number : %d\n", sec_largest);

  return 0;
}

void FindValue(int size, int *arr, int *plargest, int *psec_largest) {
  for (int j=0;j<size;j++) {
    if (*plargest < *(arr+j)) {
      *plargest = *(arr+j);
    }
  }
  for (int k=0;k<size;k++) {
    if (!(*plargest == *(arr+k))) {
      if (*psec_largest < *(arr+k)) {
        *psec_largest = *(arr+k);
      }
    }
  }
}
