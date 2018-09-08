#include <stdio.h>

int main(void)
{
  int i = 0;
  int sum = 0;
start:
  i++;
  sum += i;
  printf("%d", i);
  if (i < 5)
  {
    printf("+");
    goto start;
  }
  printf("=%d\n", sum);

  return 0;
}
