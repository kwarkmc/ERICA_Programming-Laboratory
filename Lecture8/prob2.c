#include <stdio.h>

void get_para(double x1, double y1, double x2, double y2, double *slope, double *yinter);

int main (void) {
  double x1, y1, x2, y2, s, y;
  double *slope = &s;
  double *yinter = &y;
  printf("First Point : ");
  scanf("%d", &x1);
  scanf("%d", &y1);
  printf("Second Point : ");
  scanf("%d", &x2);
  scanf("%d", &y2);

  get_para(x1, y1, x2, y2, slope, yinter);
  
  if (!(x1 == x2)) {
  printf("Slope is %d, Y intercept is %d\n", s, y);
  }
  else {
    printf("Error!\n");
  }
  return 0;
}

void get_para(double x1, double y1, double x2, double y2, double *slope, double *yinter) {
  *slope = (y1-y2)/(x1-x2);

}
