# Beecrowd 1006 - Média 2

Este diretório contém as minhas resoluções para o problema **1006 (Média 2)** do [Beecrowd](https://judge.beecrowd.com/pt/problems/view/1006)[cite: 6]. Este é um projeto prático pessoal com o objetivo de manter a fluência nas linguagens de programação que utilizo no meu dia a dia.

## 🎯 O Problema

O exercício requer a leitura de três variáveis (A, B e C) de dupla precisão (`double`), que representam as notas de um aluno, variando de 0 a 10.0[cite: 6]. O objetivo é calcular a média do aluno sabendo que:
- A nota **A** tem peso 2[cite: 6].
- A nota **B** tem peso 3[cite: 6].
- A nota **C** tem peso 5[cite: 6].

A saída deve imprimir a mensagem "MEDIA = " seguida do valor calculado, com exatamente 1 dígito após o ponto decimal[cite: 6].

**Fórmula aplicada:**
$$Media = \frac{(A \cdot 2) + (B \cdot 3) + (C \cdot 5)}{10}$$

## 💻 Soluções Implementadas

Para consolidar a sintaxe e a estrutura básica de diferentes ambientes, o problema foi resolvido em três linguagens distintas, localizadas nas seguintes pastas[cite: 7]:

- **C:** `c/main.c`[cite: 7] (utilizando funções padrão de I/O como `scanf` e `printf`[cite: 7]).
- **Java:** `java/Main.java`[cite: 7].
- **Python:** `python/main.py`[cite: 7].

## 🚀 Como Executar

Para testar qualquer uma das soluções, navegue até à diretoria raiz do exercício e execute os comandos correspondentes no terminal:

### C
```bash
gcc c/main.c -o media
./media
