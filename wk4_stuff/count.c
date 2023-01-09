#include <stdio.h>

void count(int k)
{
  while(k>0)
    {
      printf("Time Left: %d\n\n",k);
      k--;
    }
  printf("Blast Off\n");
}

int main()
{
  count(5);
  return 0;
}