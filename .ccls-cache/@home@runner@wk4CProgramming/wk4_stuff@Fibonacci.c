#include <stdio.h>

long recur_fibon(int k)
{
  if(k <= 1)
  {
    return 1;
  }
  else
  {
    return(recur_fibon(k - 1) + recur_fibon(k - 2));
  }
}

int main(void)
{
  int how_many = 0;
  int i;
  printf("How many fibonacci number do you want? ");
 // printf("Hello");
  scanf("%d",&how_many);
  for(i=0;i<how_many;i++)
    {
      printf("\n%d\t %ld\n",i,recur_fibon(i));
    }
}