#include <stdio.h>
#include <stdlib.h>

typedef struct _point {
  int x;
  int y;
} Point;

typedef struct _line {
  Point var1, var2;
  int type;
  double slope;
  double intery;
} Line;

void Type (Line *pt, int *ptype); {
  for (int i=0;i<4;i++) {
    if ((pt[i].var1.x == pt[i].var2.x) && (pt[i].var1.y == pt[i].var2.y)) {
      *ptype = 0;
    }
    if ((pt[i].var1.x == pt[i].var2.x) && (pt[i].var1.y != pt[i].var2.y)) {
      *ptype = 1;
    }
    if ((pt[i].var1.x != pt[i].var2.x) && (pt[i].var1.y == pt[i].var2.y)) {
      *ptype = 2;
    }
    if ((pt[i].var1.x != pt[i].var2.x) && (pt[i].var1.y != pt[i].var2.y)) {
      *ptype = 3;
    }
}

void Makeline (Line *pt, int *px1, int *px2, int *py1, int *py2, int *ptype) {
  if (*ptype == 1) {
    printf("the equation of 1's line : \n");
    printf("x = %d\n", pt[i].var1.x);
  }
  if (*ptype == 3) {
    printf("the equation of 2's line : \n");
    printf("y = %dx + (%d)", )
  }

}

int main (void) {
  Line *pt;
  int type = 0;
  int *ptype = &type;
  int x1 = 0;
  int *px1 = *x1;
  int x2 = 0;
  int *px2 = &x2;
  int y1 = 0;
  int *py1 = &y1;
  int y2 = 0;
  int *py2 = &y2;

  pt = malloc(sizeof(Line)*5);

  for (int i=0;i<4;i++) {
    printf("input 2 points of %d's line \n",i+1);
    scanf("%d %d", &pt[i].var1.x, &pt[i].var1.y);
    scanf("%d %d", &pt[i].var2.x, &pt[i].var2.y);
  }

  Type(pt, ptype);

  for (int j=0;j<4;i++) {
    printf("The type if %d's line = %d\n", i+1, type);
  }

  Makeline (pt, px1, px2, py1, py2);

  free(pt);

  return 0;
}
