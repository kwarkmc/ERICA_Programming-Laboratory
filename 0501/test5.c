#include <stdio.h>

void make(int *pa, int *pb, int *pc);

int main (void) {
  int a[4], b[4], c[4];
  int *pa = a;
  int *pb = b;
  int *pc = c;

  printf("Array 1 -> \n");
  for (int i=0;i<4;i++) {
    scanf("%d", &a[i]);
  }
  printf("Array 2 -> \n");
  for (int j=0;j<4;j++) {
    scanf("%d", &b[j]);
  }
  make(pa, pb, pc);
  printf("Array 3 ->\n");
  for (int k=0;k<4;k++) {
    printf("%4d", c[k]);
  }
}

void make(int *pa, int *pb, int *pc) {
  *pc = *pa + *pb;
  *(pc + 1) = *(pa + 1) - *(pb + 1);
  *(pc + 2) = *(pa + 2) * *(pb + 2);
  *(pc + 3) = *(pa + 3) / *(pb + 3);
}
