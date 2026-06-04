# 🐝 BeeCrowd — Exercício 1001: Extremamente Básico

> **Desafio inicial** da plataforma [BeeCrowd](https://judge.beecrowd.com/pt/problems/view/1001)

---

## 📄 Descrição

Leia 2 variáveis inteiras e imprima a soma delas no formato:
```
SOMA = <valor>
```

**Exemplo de entrada:**
```
10
9
```

**Exemplo de saída:**
```
SOMA = 19
```

---

## 🗂️ Estrutura do Projeto

```
ex002/
├── assembly/
│   └── ex002.asm       # Solução em Assembly
├── bin/
│   └── program         # Binário compilado
├── c/
│   ├── ex002           # Binário compilado
│   └── ex002.c         # Solução em C
├── java/
│   └── ex002.java      # Solução em Java
├── python/
│   └── ex002.py        # Solução em Python
└── README.md
```

---

## 💻 Soluções

### 🐍 Python
```python
a = int(input())
b = int(input())
print(f"SOMA = {a + b}")
```

### 🇨 C
```c
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("SOMA = %d\n", a + b);
    return 0;
}
```

### ☕ Java
```java
import java.util.Scanner;

public class ex002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        System.out.println("SOMA = " + (a + b));
    }
}
```

### ⚙️ Assembly (x86)
> Veja o arquivo [`assembly/ex002.asm`](./assembly/ex002.asm)

---

## 🚀 Como Executar

### Python
```bash
python3 python/ex002.py
```

### C
```bash
gcc c/ex002.c -o c/ex002
./c/ex002
```

### Java
```bash
javac java/ex002.java
java -cp java ex002
```

### Assembly
```bash
nasm -f elf64 assembly/ex002.asm -o assembly/ex002.o
ld assembly/ex002.o -o bin/program
./bin/program
```

---

## 🏷️ Tags

`beecrowd` `iniciante` `c` `java` `python` `assembly` `soma`

---

<div align="center">
  Feito com 💻 por <a href="https://github.com/leonardodsouzaleite">Leonardo Leite</a>
</div>
