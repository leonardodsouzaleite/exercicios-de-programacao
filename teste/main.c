#include <stdatomic.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct lista_s {
  int valor;
  struct lista_s *proximo;
} lista_s;

#define MAX 10
typedef struct {
  int item[MAX];
  int topo;
} Pilha;
void inicializar(Pilha *p) { p->topo = -1; }
int cheia(Pilha *p) {
  if (p->topo == MAX - 1) {
    return 1;
  }
  return 0;
}
int vazio(Pilha *p) {
  if (p->topo == -1) {
    return 1;
  }
  return 0;
}
void push(Pilha *p, int valor) {
  p->topo++;
  p->item[p->topo] = valor;
}
void pop(Pilha *p) { p->topo--; }
void mostrar(Pilha *p) {
  for (int i = 0; i <= p->topo; i++) {
    printf("%d\n", p->item[p->topo - i]);
  }
}

typedef struct Fila {
  int item[MAX];
  int frente;
  int tras;
} Fila;
void filaInicializando(Fila *f) {
  f->frente = 0;
  f->tras = 0;
}
int filaVazia(Fila *f) {
  if (f->frente == f->tras)
    return 1;
  return 0;
}
int filaCheia(Fila *f) {
  if (f->tras == MAX)
    return 1;
  return 0;
}
void filaPush(Fila *f, int valor) {
  if (filaCheia(f)) {
    printf("Cheia");
  } else {
    f->item[f->tras] = valor;
    f->tras++;
  }
}
void filaPop(Fila *f) {
  if (filaVazia(f)) {
    printf("Vazia");
  } else {
    f->frente++;
  }
}
void filaMostrar(Fila *f) {
  for (int i = f->frente; i <= f->tras; i++) {
    printf("%d ", f->item[i]);
  }
}

int main(int argc, char *argv[]) {
  int vetor[] = {1, 2, 3, 5};

  int *p = &vetor[2];
  int *d = &vetor[3];

  int a = *p + *d;

  printf("%d\n", a);

  // 2

  FILE *arquivo = fopen("texto_teste.txt", "a+");

  for (int i = 0; i < 4; i++)
    fprintf(arquivo, "%d ", vetor[i]);

  // 3

  lista_s lista_vetor[3];

  for (int i = 0; i < 3; i++) {
    lista_vetor[i].valor = i * 10;
    lista_vetor[i].proximo = &lista_vetor[i + 1];
  }

  for (int i = 0; i < 3; i++) {
    printf("%d ", lista_vetor[i].valor);
  }

  printf("\n");
  printf("%d ", lista_vetor[0].valor);
  printf("%d ", lista_vetor[0].proximo->valor);
  printf("%d ", lista_vetor[0].proximo->proximo->valor);

  // 4

  printf("\n\n");

  Pilha pilha;
  inicializar(&pilha);
  push(&pilha, 10);
  push(&pilha, 9);
  push(&pilha, 8);
  push(&pilha, 7);
  push(&pilha, 6);
  push(&pilha, 5);
  push(&pilha, 4);
  push(&pilha, 3);
  push(&pilha, 2);
  push(&pilha, 1);

  mostrar(&pilha);

  pop(&pilha);

  printf("\n");
  mostrar(&pilha);

  push(&pilha, 1);

  printf("\n");

  printf("%d\n", cheia(&pilha));
  printf("%d\n", vazio(&pilha));

  inicializar(&pilha);

  printf("%d\n", cheia(&pilha));
  printf("%d\n", vazio(&pilha));

  // 5

  printf("\n\n");

  Fila fila;
  filaInicializando(&fila);
  filaPush(&fila, 1);
  filaPush(&fila, 2);
  filaPush(&fila, 3);
  filaPush(&fila, 4);
  filaPush(&fila, 5);
  filaPush(&fila, 6);
  filaPush(&fila, 7);
  filaPush(&fila, 8);
  filaPush(&fila, 9);
  filaPush(&fila, 10);

  filaMostrar(&fila);

  return 0;
}
