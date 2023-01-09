#include <stdio.h>

int main(void)
{
 // const int SIZE = 5;
  int SIZE = 5;
  int grades[SIZE];
  memcpy(grades, (int[]){78, 67, 92, 83, 88}, sizeof(grades));



  double sum = 0.0;
  int i;

  printf("\nMy grade are\n");
  for(i=0;i<SIZE;i++)
    {
      printf("%d\t",grades[i]);
    }
  
  printf("\n\n");

  for(i=0;i<SIZE;i++)
    sum = sum + grades[i];

  printf("My average grades is %.2f\n\n",sum/SIZE);
}
