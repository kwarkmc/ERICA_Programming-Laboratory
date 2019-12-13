#include <stdio.h>

struct Books {
  char name[30];
  char auth[30];
  char publ[30];
  int borrowed;
};

int main (void) {
  struct Books book_list[3];
  char asdsa;
  int i;
  for (i=0;i<3;i++) {
    printf("책 %d 정보 입력 : ", i);
    scanf("%s %s %s", book_list[i].name, book_list[i].auth, book_list[i].publ);
    printf("빌려졌나요? (안빌림 : 0, 빌림 : 1) : ");
    scanf("%d", &book_list[i].borrowed);
  }

  for (i=0;i<3;i++) {
    printf("-------------------\n");
    printf("책 %s의 정보\n", book_list[i].name);
    printf("저자 : %s\n", book_list[i].auth);
    printf("출판사 : %s\n", book_list[i].publ);

    if (book_list[i].borrowed == 0) {
      printf("안빌려짐\n");
    }
    else {
      printf("빌려짐 \n");
    }
  }
  return 0;
}
