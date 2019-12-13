#include <stdio.h>

int main (void) {
  int i,j,sum=0;
  
  for (i=2;;i++) {
    for (j=2;j<i;j++) {
      if (i%j==0) {
        break;
      }
    }
    if (sum > 2000) {
      break;
    }
    if (j==i) {
      sum = sum + i;
    }
  }
  printf("The sum of prime number : %d\nThe last prime number : %d\n", sum, i);
  return 0;
}
