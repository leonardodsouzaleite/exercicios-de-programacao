# 🐝 BeeCrowd #1000 — Hello World!

![BeeCrowd](https://img.shields.io/badge/BeeCrowd-%231000-F5A623?style=for-the-badge)
![Dificuldade](https://img.shields.io/badge/Dificuldade-Iniciante-brightgreen?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-✔%20Accepted-success?style=for-the-badge)
![Linguagens](https://img.shields.io/badge/Linguagens-4-blue?style=for-the-badge)

---

## 📌 Sobre o Problema

> 🔗 **Link oficial:** [https://judge.beecrowd.com/pt/problems/view/1000](https://judge.beecrowd.com/pt/problems/view/1000)

O **Problema 1000** é o ponto de partida dos **Desafios Iniciais** do BeeCrowd.  
A única exigência é imprimir `Hello World!` na saída padrão — simples assim.

| Campo      | Detalhe     |
|:-----------|:------------|
| Número     | 1000        |
| Categoria  | Iniciante   |
| Plataforma | BeeCrowd    |
| Veredito   | ✅ Accepted |

---

## 🗂️ Estrutura do Repositório

```
.
├── assembly/
│   └── ex001.asm
├── bin/
├── c/
│   └── ex001.c
├── java/
│   └── ex001.java
└── python/
    └── ex001.py
```

---

## 💡 Soluções

### 🐍 Python
```python
print("Hello World!")
```

### ☕ Java
```java
public class ex001 {
    public static void main(String[] args) {
        System.out.println("Hello World!");
    }
}
```

### 🔵 C
```c
#include <stdio.h>

int main() {
    printf("Hello World!\n");
    return 0;
}
```

### ⚙️ Assembly (RISC-V — RARS)
```asm
.data
    msg: .string "Hello World!\n"

.text
.globl main
main:
    li   a7, 4
    la   a0, msg
    ecall

    li   a7, 10
    ecall
```

---

## ⚙️ Como Executar

### 🐍 Python
```bash
python python/ex001.py
```

### ☕ Java
```bash
javac java/ex001.java
java -cp java ex001
```

### 🔵 C
```bash
gcc c/ex001.c -o bin/ex001
./bin/ex001
```

### ⚙️ Assembly (RARS — RISC-V Simulator)
```bash
rars nc assembly/ex001.asm
```
> 💡 **RARS** (RISC-V Assembler and Runtime Simulator) — [Download aqui](https://github.com/TheThirdOne/rars)

**Saída esperada (todas as linguagens):**
```
Hello World!
```

---

## 📚 Sobre o BeeCrowd

O **BeeCrowd** (anteriormente URI Online Judge) é uma plataforma brasileira de programação competitiva onde você pode resolver centenas de problemas de lógica e algoritmos em diversas linguagens de programação.

---

## 📝 Licença

Distribuído sob a licença MIT. Sinta-se livre para usar e modificar.
