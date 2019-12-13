#include <stdio.h>

int main(void) {
  int n;
  int i;
  int check;
  for (n=1; n<=1000;n++) {
    for (i=2;i<n;i++) {
      if (n%i == 0) {
        break;
      }
    }
    if (i==n){
      printf("%3d", i);
    }
  }
  printf("\n");
  return 0;
}
