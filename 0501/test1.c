#include <stdio.h>

int main (void) {
  int num;
  int*pnum = &num;

  scanf("%d", &num);
  *pnum = 7;
  printf("Changed a = %d", num);
  return 0;
}
