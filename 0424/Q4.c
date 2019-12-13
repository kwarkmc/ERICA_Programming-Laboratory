#include <stdio.h>

void main() {
  char food[4][10] = {
    "pizza",
    "chicken",
    "rice",
    "pork"
  };
  printf("%s\n", food[0]);
  printf("%s\n", *food);
  printf("%s\n", food[1]);
  printf("%s\n", *(food+1));
  printf("%c\n", *(food[2]));
  printf("%c\n", *(*(food+2)+2));
}
