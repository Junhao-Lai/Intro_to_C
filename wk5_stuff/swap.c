void swap(int *i, int *j)
{
  int temp = *i;
  *i = *j;
  *j = temp;
}

int main()
{
  int i = 5;
  int j = 2;
  swap(&i,&j);

  printf("%d %d\n",i,j);
}