#include <stdio.h>

void calc(int *a,int *psum,int *pdiv);

int main (void) {
  int array[5];
  int *a = &array;
  int sum = 0;
  int div = 1;
  
  int *psum = &sum;
  int *pdiv = &div;
  for (int i=0;i<5;i++) {
    printf("value : ");
    scanf("%d", &array[i]);
  }

  calc(a, psum, pdiv);

  printf("Sum = %d\nMultiply = %d", sum, div);
return 0;
}

void calc(int *a, int *psum,int *pdiv) {
  for (int j=0;j<5;j++) {
    *psum += *(a+j);
  }
  for (int k=0;k<5;k++) {
    *pdiv *= *(a+k);
  }
}
