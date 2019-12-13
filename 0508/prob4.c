#include <stdio.h>

void swap (int *x, int *y, int *z);

int main (void) {
  int x1, x2, x3;
  printf("insert x1 : ");
  scanf("%d", &x1);
  printf("insert x2 : ");
  scanf("%d", &x2);
  printf("insert x3 : ");
  scanf("%d", &x3);
  int *x = &x1;
  int *y = &x2;
  int *z = &x3;

  printf("Before ordering : %d %d %d\n", x1, x2, x3);

  swap(x, y, z);

  printf("After ordering : %d %d %d\n", x1, x2, x3);

}

void swap (int *x, int *y, int *z) {
  int temp;
  if (*x > *y) {
    temp = *x;
    *x = *y;
    *y = temp;
  }
  if (*y > *z) {
    temp = *y;
    *y = *z;
    *z = temp;
  }
  if (*x > *y) {
    temp = *x;
    *x = *y;
    *y = temp;
  }
}
