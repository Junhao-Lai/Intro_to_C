#include <stdio.h>

void write_very(int count)
{
  while(count > 0)
  {
    printf("\nvery");
    count--;
  }
  printf("\nVery much\n");
}

int main(void)
{
  int repeat = 0;
  printf("How strong is your love? (0-10)");
  scanf("%d", &repeat);
  printf("\nI love you very");
  write_very(repeat);
  return 0;
  
}