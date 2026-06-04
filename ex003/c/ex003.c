#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  int t1 = 0, t2 = 1, proximo = 0;

  // scanf("%d", &n);
  n = 10;

  for (int i = 0; i <= n; i++) {
    printf("%d\n", t1);
    proximo = t1 + t2;
    t1 = t2;
    t2 = proximo;
  }

  return 0;
}
