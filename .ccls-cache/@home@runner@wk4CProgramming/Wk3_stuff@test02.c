#include <stdio.h>

int main() {
  // int i = 1; int j = 2;
  // int n = (i < j)? 4: 6;

  // int i = 1; int j = 2;

  // int n = i, j+1;

  int i = 1;
  int j = 2;

  int n = (i == j) ? 4 : (i < j) ? 3 : 5;
  printf("%d\n", n);
}