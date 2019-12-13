#include <stdio.h>

int main (void) {
  int a[3] = {10, 20, 30};
  int *pt;
  pt = a;
  printf("Array's Adress %u\n", a);
  printf("a[1]'s Adress %u\n", &a[1]);
  printf("a+1's Value %u\n", a+1);
  printf("pt+1's Value %u\n", pt + 1);
  printf("a[2]'s Value %u\n", a[2]);
  printf("*(pt+2)'s Value %u\n", *(pt + 2));
  printf("*pt+2's Value : %u\n", *pt + 2);
  return 0;
}
