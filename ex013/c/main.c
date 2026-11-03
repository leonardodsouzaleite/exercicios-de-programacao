#include <stdio.h>

int main(int argc, char *argv[]) {
  char nome[100];
  double fixo, vendas;

  scanf("%s", nome);
  scanf("%lf", &fixo);
  scanf("%lf", &vendas);

  double total = fixo + (vendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", total);

  return 0;
}
