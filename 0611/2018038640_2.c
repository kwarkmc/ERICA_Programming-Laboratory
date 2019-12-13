#include <stdio.h>
#include <stdlib.h>

typedef struct _score {
  int kor;
  int eng;
  int math;
} Score;

typedef struct _student {
  Score score;
  char name[30];
  int id;
} Student;

void CalMean (Student* ptr, int *pmean) {
  *pmean = (ptr[0].score.kor + ptr[0].score.eng + ptr[0].score.math) / 3;
}

void main() {
  Student* ptr;
  int mean = 0;
  int *pmean = &mean;
  ptr = malloc(sizeof(Student)*1);

  if (ptr == NULL) {
    printf("Malloc error!\n");
    exit(1);
  }

  for (int i=0;i<1;i++) {
    printf("input your name : ");
    scanf("%s", ptr[i].name);
    printf("input your ID : ");
    scanf("%d", &ptr[i].id);
    printf("input your score : \n");
    printf("Korean : ");
    scanf("%d", &ptr[i].score.kor);
    printf("English : ");
    scanf("%d", &ptr[i].score.eng);
    printf("Math : ");
    scanf("%d", &ptr[i].score.math);
  }

  CalMean(ptr, pmean);

  printf("------student info------\n");

  printf("Name : %s\n", ptr[0].name);
  printf("ID : %d\n", ptr[0].id);
  printf("Mean : %d\n", *pmean);

}
