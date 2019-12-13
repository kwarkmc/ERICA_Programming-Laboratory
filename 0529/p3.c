#include <stdio.h>
#include <string.h>

struct _person {
  char name[30];
  char ID[15];
  unsigned int age;
};

typedef struct _person person;

void ShowPersonData (person *ptr) {
  printf("이름 : %s \n", (*ptr).name);
  printf("주민등록번호 : %s \n", (*ptr).ID);
  printf("나이 : %u \n", (*ptr).age);
}

int main (void) {
  person minchang;
  person copyman;
  person *personPtr;

  strcpy(minchang.name, "곽민창");
  strcpy(minchang.ID, "990706-1100000");
  minchang.age = 21;

  copyman = minchang;
  personPtr = &copyman;
  ShowPersonData(personPtr);
  return 0;
}
