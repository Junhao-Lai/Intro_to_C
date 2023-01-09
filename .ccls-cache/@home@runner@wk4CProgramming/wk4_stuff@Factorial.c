#include <stdio.h>

long recur_fact(int n)
{
  if(n==1){
    return 1;
  }
  else{
    recur_fact((n-1)*n);
  }
}

int main(void)
{
  int how_many = 0;
  int i;
  printf("How many do you factorial do you want? ");
  scanf("%d",&how_many);
  for(i=1;i<=how_many;i++){
    printf("\n %d \t %ld", i, recur_fact(i));
  printf("\n\n");
  return 0;
  }  
}