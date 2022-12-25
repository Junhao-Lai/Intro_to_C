#include <math.h>
#include <stdio.h>

int main() {
  float interval, x, y;
  int i;

  for (i = 0; i <= 10; i++) {
    interval = i / 10.0;
    x = (sin(interval));
    y = (cos(interval));
    printf("sin of (%0.2f) is %0.2f\t cos of (%0.2f) is %0.2f\n", interval, x,
           interval, y);
  }

  return 0;
}