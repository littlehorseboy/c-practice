#include <stdio.h>

float calculateAvg(float num[], int size)
{
  float result = 0;
  int i;
  for (i = 0; i < size; i++)
    result += num[i];
  result /= size;
  return (result);
}

int main()
{
  int i;
  int n; // 計算的數字個數
  float num[10];

  printf("請輸入要計算的數字有幾個: ");
  scanf("%d", &n);

  while (n > 10 || n <= 0)
  {
    printf("請輸入1至10之間的數字\n");
    scanf("%d", &n);
  }

  for (i = 0; i < n; i++)
  {
    printf("請輸入第 %d 個數字: ", i + 1);
    scanf("%f", &num[i]);
  }

  printf("平均數為 %.2f", calculateAvg(num, n));

  return 0;
}
