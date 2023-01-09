#include <stdio.h>

double avg_grade(int how_many, int grade[])
{
  int i;
  int sum = 0.0;

  for(i=0;i<how_many;i++)
    {
      sum = sum + grade[i];
    }
  return(sum/how_many);
  
}

void print_grade(int how_many, int grade[])
{
  int i;
  printf("I have %d grade\n",how_many);
  for(i=0; i<how_many; i++)
    {
      printf("%d\t", grade[i]);
    }
}


int main(void)
{
  const int SIZE = 5;
  
}