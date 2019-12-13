#include <stdio.h>

int main(void) {
  int i = 0;
  int n = 1;
  int sum = 0;
  while (1) {
    n++;
    for (i=2; i<n; n++) {
      if (n%i == 0) {
        break;
      }
    }
    if (i==n) {
      printf("%3d\n", n);
      sum = sum + n;
    }
    if (sum <= 2000) {
      break;
      printf("MaxSum : %d \n Last PrimeNum : %d\n", sum, n);
    }
  }
  return 0;
}
