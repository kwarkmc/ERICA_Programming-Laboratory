#include <stdio.h>

int main (void) {
  char id[] = "2018038640";
  char *name = "kwarkminchang";
  char *pt;
  pt = name;
  printf("%c\n", id[5]);
  printf("%c\n", *(pt + 5));
  pt++;
  printf("%s\n", id + 2);
  printf("%s\n", pt + 2);
  return 0;
}
