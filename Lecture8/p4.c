#include <stdio.h>

void swep(int *x, int *y, int *z);

int main (void) {

  int x1, x2, x3;

  printf("Insert number : ");
  scanf("%d", &x1);
  printf("Insert number : ");
  scanf("%d", &x2);
  printf("Insert number : ");
  scanf("%d", &x3);

  int *x = &x1;
  int *y = &x2;
  int *z = &x3;

  printf("Before Ordering : %4d%4d%4d\n", x1, x2, x3);
  swep(x, y, z);
  printf("After Ordering : %4d%4d%4d\n", x1, x2, x3);

return 0;
}

void swep(int *x, int *y, int *z) {
  int temp;
  if (*x>*y) {
   temp = *x;
   *x = *y;
   *y = temp;
  }
  if (*y>*z) {
    temp = *y;
    *y = *z;
    *z = temp;
  }
  if (*x>*y) {
    temp = *x;
    *x = *y;
    *y = temp;
  }
}
