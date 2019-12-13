#include <stdio.h>

#define NAME_LEN 30
#define PID_LEN 15

typedef struct _person{
  char name[NAME_LEN];
  char ID[PID_LEN];
  unsigned int age;
}person;


void ShowPersonData (person *ptr) {
  printf("이름 : %s\n", ptr->name);
  printf("생년월일 : %s\n", ptr->ID);
  printf("나이 : %s\n", ptr->age);
}

int main (void) {
  person minchang = {"곽민창", "990706", 21};
  person minseo = {"곽민서", "020518", 18};

  ShowPersonData (person minchang)
}
