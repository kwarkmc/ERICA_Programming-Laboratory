#include <stdio.h>

int main (void) {
  int ch;
  FILE * src = fopen("data.txt", "rt");
  FILE * des = fopen("dst.txt", "wt");

  if (src==NULL || des==NULL) {
    puts("파일오픈실패");
    return -1;
  }

  while ((ch=fgetc(src))!=EOF)
    fputc(ch,des);

  fclose(src);
  fclose(des);

  puts("파일복사완료!");
  return 0;
}
