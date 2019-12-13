#include <stdio.h>

void add(int*pa);

int main (void) {
  int a[5] = {10,20,30,40,50};
  int*pa = &a;
  printf("---------original array---------\n");
  for (int i=0;i<5;i++) {
    printf("%4d", a[i]);
  }
  printf("\n");
  printf("---------changed array---------\n");
  add(pa);
  for (int j=0;j<5;j++) {
    printf("%4d", a[j]);
  }
  printf("\n");
  return 0;
}

void add (int*pa) {
  for (int k=0;k<5;k++) {
    *(pa+k) += k+1;
  }
}
