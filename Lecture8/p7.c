#include <stdio.h>

int main (void) {
  int a;
  int *pa = &a;

  printf("Input number : ");
  scanf("%d", &a);

  *pa = 7;

  printf("changed a = %d\n", a);

  return 0;
}
