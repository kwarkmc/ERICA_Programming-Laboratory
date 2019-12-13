#include <stdio.h>
#define ARRY_LEN 3
#define NAME_LEN 30
#define PID_LEN 15

typedef struct _person {
  char name[NAME_LEN];
  char ID[PID_LEN];
  unsigned int age;
} person;

void ShowPersonData (person *ptr);

int main(void) {
  int i;
  person personArr[ARRY_LEN] = {
    {"곽민창", "990706", 21},
    {"곽민서", "020518", 18},
    {"이은희", "690525", 51}
  };

  for (int i=0;i<ARRY_LEN;i++) {
    ShowPersonData(&personArr[i]);
  }
  return 0;
}

void ShowPersonData (person *ptr) {
  printf("이름 : %s\n", ptr->name);
  printf("생년월일 : %s\n", ptr->ID);
  printf("나이 : %d\n\n", ptr->age);
}
