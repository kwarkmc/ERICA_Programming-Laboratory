#include <stdio.h>

void main () {
  int i, n;
  char *food[] = {
    "pizza",
    "chicken",
    "rice",
    "pork"
  };
  n=sizeof(food)/sizeof(food[0]);
  for (i=0; i<n; i++) {
    printf("%s\n", food[i]);
  }
}
