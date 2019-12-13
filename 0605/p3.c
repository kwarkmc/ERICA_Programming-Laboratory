#include <stdio.h>
#include <stdlib.h>

typedef struct Point2D {
  int x;
  int y;
} POINT;

int main (void) {
  POINT *p;
  p = (POINT *)malloc(3*sizeof(POINT));
  p[0].x = 10;
  p[0].y = 20;
  p[1].x = 30;
  p[1].y = 40;
  p[2].x = 50;
  p[2].y = 60;
  printf("[%d, %d]\n", p[0].x, p[0].y);
  printf("[%d, %d]\n", p[1].x, p[1].y);
  printf("[%d, %d]\n", p[2].x, p[2].y);

  free(p);
  return 0;
}
