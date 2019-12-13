#include <stdio.h>

struct _point {
  double xPos;
  double yPos;
};

typedef struct _point point;

point IncrePos(point pnt) {
  pnt.xPos++;
  pnt.yPos++;
  return pnt;
}
int main (void) {
  point p1, p2, p3;

  p1.xPos = 0.5;
  p1.yPos = 1.5;

  printf("p1.xPos : %g \n", p1.xPos);
  printf("p1.yPos : %g \n", p1.yPos);

  p2 = p1;
  p3 = IncrePos(p2);

  printf("p2.xPos : %g \n", p2.xPos);
  printf("p2.yPos : %g \n", p2.yPos);
  printf("p3.xPos : %g \n", p3.xPos);
  printf("p3.yPos : %g \n", p3.yPos);
  return 0;
}
