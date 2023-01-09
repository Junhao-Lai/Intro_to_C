#include <stdio.h>

int main(void)
{
  const int SIZE = 5;
  int grade[SIZE] = {78,67,92,83,88};
  double sum = 0.0;
  double *ptr_to_sum = &sum;
  int i;
  printf("\n my grades are:\n");
  for(i=0; i < SIZE;i++)
    {
      printf("%d\t", grade[i]);
    }
  printf("\n\n");

  for(i=0; i<SIZE; i++)
    {
      sum = sum + grade[i];
    }
  printf("The average score is %0.2f", sum/SIZE);
  printf("\n\n");

  printf("sum is at %p, or %lu and is %lf\n",ptr_to_sum, ptr_to_sum, *ptr_to_sum);

  printf("grades are %lu to %lu\n", grade, grade + 5);
  

  return 0;
}
