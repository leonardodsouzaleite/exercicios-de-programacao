#include <stdio.h>

int main(int argc, char *argv[]) {
  int[] vetor = [ 2, 1, 12, 52, 12, 32, 67, 76, 88, 10 ];

  int t1, t2;

  int a = 1;

  while (a != 0) {
    a = 0;
    for (int i = 0; i < 9; i++) {
      t1 = vetor[i];
      t2 = vetor[i + 1];
      if (t1 > t2) {
        int temporario = t2;
        t2 = t1;
        t1 = t2;
        a++;
      }
      vetor[i] = t1;
      vetor[i + 1] = t2;
    }
  }

  return 0;
}
