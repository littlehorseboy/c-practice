#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct data
  {
    char name[15];
    int score;
  };

  struct data st = {"Gate", 88};

  printf("姓名: %s\n", st.name);
  printf("成績: %d\n", st.score);
  system("pause"); // 怎麼感覺沒用 0.0

  return 0;
}
