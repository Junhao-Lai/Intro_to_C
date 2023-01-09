#include<stdio.h>

void recur_count(int k)
{
  if (k == 0){
    printf("点火\n");
  }
  else{
    printf("Counting down: %d\n", k);
    recur_count(k-1);
    }
}

int main()
{
  recur_count(5);
  return 0;
}