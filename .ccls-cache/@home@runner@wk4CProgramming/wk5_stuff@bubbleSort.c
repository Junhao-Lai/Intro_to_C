//This is bubble sort

#include <stdio.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void print_array(int how_many, int data[], char *str)
{
  int i;
  printf("%s", str);

  for(i=0;i<how_many;i++)
    {
      printf("%d\t", data[i]);
    }
}

void bubble(int data[], int how_many)
{
  int i, j;
  int go_on;

  for(i=0;i<how_many;i++)
    {
      print_array(how_many,data,"\nInside bubble\n");
      printf("i = %d, input any integer to countinue: ",i);
      scanf("%d", &go_on);
      for(j = how_many - 1; j > i; j--)
        {
          if(data[j-1]>data[j]){ //如果左边大于右边
            swap(&data[j-1],&data[j]); //然后就替换
          }
        }
    }
}

int main(void)
{
  
}