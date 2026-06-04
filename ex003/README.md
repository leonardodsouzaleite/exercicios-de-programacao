# 🔢 ex003 — Fibonacci em Múltiplas Linguagens

Implementação do algoritmo de **Fibonacci** em quatro linguagens de programação distintas: **Python**, **C**, **Java** e **Assembly (RISC-V)**. O projeto tem como objetivo comparar abordagens (recursiva e iterativa) e paradigmas de diferentes níveis de abstração para um mesmo problema clássico da computação.

---

## 📁 Estrutura do Projeto

```
ex003/
├── python/
│   └── ex003.py          # Implementação recursiva em Python
├── c/
│   └── ex003.c           # Implementação iterativa em C
├── java/
│   └── ex003.java        # Implementação recursiva em Java
├── assembly/
│   └── ex003.asm         # Implementação iterativa em Assembly RISC-V
└── bin/
    ├── ex003.class       # Bytecode compilado (Java)
    └── Main.class        # Bytecode compilado (Java)
```

---

## 📐 Sobre o Algoritmo

A **sequência de Fibonacci** é definida pela recorrência:

```
F(0) = 0
F(1) = 1
F(n) = F(n-1) + F(n-2),  para n ≥ 2
```

Os primeiros termos da sequência são:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
```

Todas as implementações calculam **F(10) = 55**.

---

## 🛠️ Implementações

### 🐍 Python — Recursivo

```python
def fibonacci(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if n == 2:
        return 1
    return fibonacci(n - 1) + fibonacci(n - 2)

print(fibonacci(10))
```

**Abordagem:** Recursiva clássica com casos base explícitos para `n = 0`, `n = 1` e `n = 2`.

**Executar:**

```bash
python3 python/ex003.py
```

---

### ⚙️ C — Iterativo

```c
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  int t1 = 0, t2 = 1, proximo = 0;

  n = 10;

  for (int i = 0; i <= n; i++) {
    printf("%d\n", t1);
    proximo = t1 + t2;
    t1 = t2;
    t2 = proximo;
  }

  return 0;
}
```

**Abordagem:** Iterativa com dois acumuladores (`t1` e `t2`). Imprime **todos os termos** da sequência de F(0) até F(10).

**Compilar e executar:**

```bash
gcc c/ex003.c -o ex003_c
./ex003_c
```

---

### ☕ Java — Recursivo

```java
public class ex003 {

  public static long fibonacci(int n) {
    if (n < 2) {
      return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
  }

  public static void main(String[] args) {
    System.out.println(fibonacci(10));
  }
}
```

**Abordagem:** Recursiva com retorno do tipo `long`, permitindo calcular termos maiores da sequência sem overflow.

**Compilar e executar:**

```bash
javac java/ex003.java -d bin/
java -cp bin ex003
```

---

### 🔧 Assembly — RISC-V (Iterativo)

```asm
.global _start

_start:
    li a7, 1

    li t0, 0       # F(0) = 0
    li t1, 1       # F(1) = 1

    li t4, 11      # contador: 11 termos (F(0) a F(10))

fibonacci:
    beq t4, zero, fim

    mv a0, t0
    li a7, 1
    ecall          # imprime o termo atual

    add t3, t0, t1
    mv t0, t1
    mv t1, t3

    addi t4, t4, -1
    j fibonacci

fim:
    li a7, 10
    ecall          # encerra o programa
```

**Abordagem:** Iterativa em Assembly RISC-V. Utiliza chamadas de sistema (`ecall`) para imprimir cada termo e encerrar o programa. Imprime os 11 primeiros termos da sequência (F(0) até F(10)).

**Executar (via RARS ou simulador RISC-V):**

```bash
# Com RARS (RISC-V Assembler and Runtime Simulator):
java -jar rars.jar assembly/ex003.asm
```

---

## 📊 Comparativo das Implementações

| Linguagem | Abordagem | Saída          | Nível de Abstração |
| --------- | --------- | -------------- | ------------------ |
| Python    | Recursiva | F(10) = 55     | Alto               |
| C         | Iterativa | F(0) até F(10) | Médio              |
| Java      | Recursiva | F(10) = 55     | Médio-Alto         |
| Assembly  | Iterativa | F(0) até F(10) | Baixo (RISC-V)     |

---

## ✅ Pré-requisitos

| Ferramenta | Versão Recomendada | Uso                              |
| ---------- | ------------------ | -------------------------------- |
| Python     | 3.x                | Executar `ex003.py`              |
| GCC        | 9+                 | Compilar `ex003.c`               |
| JDK        | 11+                | Compilar e executar `ex003.java` |
| RARS       | 1.5+               | Simular `ex003.asm` (RISC-V)     |

---

## 📚 Conceitos Abordados

- Recursão vs. iteração
- Sequência de Fibonacci
- Chamadas de sistema em baixo nível (Assembly RISC-V)
- Portabilidade de algoritmos entre diferentes linguagens e paradigmas

---

## 📝 Licença

Este projeto é de uso educacional. Sinta-se livre para estudar, modificar e compartilhar.
