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
  double yinter;
} Line;

void Type(Line*pt, int *ptype) {
  for (int =0;i<4;i++) {
    if ((pt[i].var1.x == pt[i].var2.x)&&(pt[i].var1.y == pt[i].var2.y)) {
      *ptype = 0;
    }
    if ((pt[i].var1.x == pt[i].var2.x)&&(pt[i].var1.y != pt[i].var2.y)) {
     
    }

  }
}

int main (void) {
  pt = malloc(sizeof(Line)*5);

  for (int i=0;i<4;i++) {
    printf("input 2 points of %d's line \n", i+1);
    scanf("%d %d", &pt[i].var1.x, &pt[i].var1.y);
    scanf("%d %d", &pt[i].var2.x, &pt[i].var2.y);
  }
}
