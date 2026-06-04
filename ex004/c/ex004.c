#include <math.h>
#include <stdio.h>

const double PI = 3.14159;

int main(int argc, char *argv[]) {
  double t0;
  scanf("%lf", &t0);

  double area = PI * pow(t0, 2);

  printf("A=%.4f\n", area);

  return 0;
}
