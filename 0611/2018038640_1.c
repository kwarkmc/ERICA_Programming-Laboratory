#include <stdio.h>
#include <stdlib.h>

typedef struct _food { // 음식의 이름과 가격, 칼로리를 멤버로 가지는 구조체 선언
  char name[30];
  int price;
  double cal;
} Food;

int main () {
  Food* pt;  // 구조체 포인터 선언
  pt = malloc(sizeof(Food)*1);  // (_food 구조체의 크기 * 1)만큼의 메모리를 동적할당하여 그 주소를 pt 에 저장

  if(pt==NULL) { // 메모리가 올바르게 할당되었는지를 체크
    printf("malloc error!\n");
    exit(1);
  }

  for (int i=0;i<3;i++) { // 다음 코드를 1회 반복
    printf("Intput %dth Food : ", i+1);
    scanf("%s", pt[i].name); // _food 구조체의 멤버 name에 이름을 입력.
    printf("Price : ");
    scanf("%d", &pt[i].price);  // _food 구조체의 멤버 price에 가격을 입력
    printf("Calorie : ");
    scanf("%lf", &pt[i].cal); // _food 구조체의 멤버 cal에 칼로리를 입력
  }

  printf("------------Menu------------\n");
  printf("Food : %4s %4s %4s\n", pt[0].name, pt[1].name, pt[2].name); // 입력받은 이름을 출력
  printf("Price : %4d %4d %4d\n", pt[0].price, pt[1].price, pt[2].price); // 입력받은 가격을 출력
  printf("Cal : %.2f %.2f %.2f\n", pt[0].cal, pt[1].cal, pt[2].cal); //입력받은 칼로리를 출력

  free(pt); // 동적 메모리 반납

  return (0);
}
