#include <stdio.h>

int get_para(double x1, double y1, double x2, double y2, double *slope, double *yinter);

int main (void) {
  double x1, y1, x2, y2, s, y;
  double *slope = &s;
  double *yinter = &y;

  printf("First Point : \n");
  scanf("%lf", &x1);
  scanf("%lf", &y1);
  printf("Second Point : \n");
  scanf("%lf", &x2);
  scanf("%lf", &y2);

  if (get_para(x1, y1, x2, y2, slope, yinter) == -1) {
    printf("Error!\n");
  }
  else if (get_para(x1, y1, x2, y2, slope, yinter) == 0){
    printf("Slope is %f, Y intercept is %f\n", s, y);
  }
  return 0;
}

int get_para(double x1, double y1, double x2, double y2, double *slope, double *yinter) {
  if (x1 == x2) {
    return -1;
  }
  else {
  *slope = (y1-y2)/(x1-x2);
  *yinter = y1-((*slope)*x1); 
  return 0;
  }
}
