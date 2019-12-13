#include <stdio.h>

int main (void) {
  int a;
  int *pa = &a;

  printf("Input number : ");
  scanf("%d", &a);

  printf("a = %d\n", a);
  printf("address of a = %d\n", &a);
  printf("pa pointing value = %d\n", *pa);
  printf("pa have an address = %d\n", pa);
  printf("address of pa = %d\n", &pa);
  return 0;
}
