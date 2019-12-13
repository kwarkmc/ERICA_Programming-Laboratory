#include <stdio.h>

int main (void) {
  printf("---------original array---------\n");
  int a[5] = {10,20,30,40,50};
  for (int j=0; j<5; j++) {
    printf("%4d", a[j]);
  }
  printf("\n");
  int*pa=a;
  for (int i=0;i<5;i++) {
    *(pa+i) += i+1;
  }
  printf("---------changed array---------\n");
  for (int k=0; k<5; k++) {
    printf("%4d", a[k]);
  }
  printf("\n");
  return 0;
}
