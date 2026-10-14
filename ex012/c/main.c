#include <stdio.h>

int main(int argc, char *argv[]) {
  int number, hours;
  double per_hours;

  scanf("%d", &number);
  scanf("%d", &hours);
  scanf("%lf", &per_hours);

  double salary = hours * per_hours;

  printf("NUMBER = %d\nSALARY = U$ %.2lf\n", number, salary);

  return 0;
}
