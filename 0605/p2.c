#include <stdio.h>
#include <stdlib.h>

int main (void) {
  int * pt;
  pt = (int *)malloc(5*sizeof(int));
  double sum = 0;
  double average = 0;
  for (int i=0;i<5;i++) {
    printf("input your %dth score : ", i+1);
    scanf("%d", &pt[i]);
  }

  for (int j=0;j<5;j++) {
    sum += pt[j];
  }
  average = sum / 5;
  printf("average = %.2lf\n", average);

  free(pt);

  return 0;
}
