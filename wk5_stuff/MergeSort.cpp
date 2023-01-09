// MergeSort 
#include <stdio.h>
void print_array(int how_many, int data[], char *str)
{
  int i;
  printf("%s",str);
  for(i=0;i<how_many;i++)
    {
      printf("%d\t",data[i]);
    }
}

void merge(int a[], int b[], int c[], int how_many) /* a and b same size */
{
  int i = 0, j = 0, k = 0;
  while(i < how_many && j < how_many)
    if(a[i]<b[j])
      c[k++] = a[i++];
    else
      c[k++] = b[j++];
  while (i < how_many)
    c[k++] = a[i++];
  while (j < how_many)
    c[k++] = b[j++];
}

int main(void)
{
  const int SIZE = 5;
  int a[SIZE] = {3,5,1,2,4};
  int b[SIZE] = {7,8,6,9,10};
  int c[2*SIZE];
  print_array(SIZE, a, "My grades\n");
  printf("\n\n");
  print_array(SIZE,b,"More grades\n");
  printf("\n\n");
  merge(a,b,c,SIZE);
  print_array(2*SIZE,c,"\nMy sorted grades\n");
  printf("\n\n");
  return 0;
  
}