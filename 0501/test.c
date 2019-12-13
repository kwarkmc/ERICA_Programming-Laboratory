#include <stdio.h>

int main (void) {
  int num;
  int* ptr;

  printf("Put your number\n");
  scanf("%d", &num);

  ptr = &num;

  printf("a = %d\n", num);
  printf("address of a = %d\n", &num);
  printf("pa pointing value = %d\n" *ptr);
  printf("pa have an address = %d\n", ptr);
  printf("address of pa = %d\n", &ptr);
  return 0;
}
