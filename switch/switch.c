#include <stdio.h>

int main(void)
{
  char ch;
  printf("請輸入 ABC 任一個字母\n");

  scanf("%c", &ch);

  switch (ch)
  {
  case 'A':
    printf("你輸入了%c\n", ch);
    break;
  case 'B':
    printf("你輸入了%c\n", ch);
    break;
  case 'C':
    printf("你輸入了%c\n", ch);
    break;
  default:
    printf("請重新輸入\n");
  }

  return 0;
}
