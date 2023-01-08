#include <stdio.h>

int main(){
  int blank = 0, digit = 0, character = 0;
  int c;
  for(; (c = getchar()) != EOF; character++)
  {
    if(c == ' ')
    {
      ++blank;
    }
    else if(c >= '0' && c <= '9')
    {
      ++digit;
    } 
  };
  printf("Blank = %d, digit = %d, character = %d\n", blank,  digit, character);
}
