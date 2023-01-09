#include <stdio.h>

int main()
{
  int count = 10;
  while(count>0)
    {
      printf("Time remaining: %d\n\n",count);
      count--;
    }
  printf("点火起飞\n");
}

// count_down(int k);