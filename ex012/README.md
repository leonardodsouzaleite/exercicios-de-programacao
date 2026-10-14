# Beecrowd 1008 - Salário

Este diretório contém as minhas resoluções para o problema **1008 (Salário)** do [Beecrowd](https://judge.beecrowd.com/pt/problems/view/1008)[cite: 9]. Este é um projeto prático pessoal com o objetivo de manter a fluência nas linguagens de programação que utilizo.

## 🎯 O Problema

O exercício pede que seja escrito um programa que leia o número de um funcionário, seu número de horas trabalhadas e o valor que ele recebe por hora[cite: 9]. Com base nisso, deve-se calcular o salário total do funcionário[cite: 9].

- A entrada contém 2 números inteiros (representando o número do funcionário e a quantidade de horas trabalhadas) e 1 número com duas casas decimais (representando o valor da hora trabalhada)[cite: 9].
- A saída deve mostrar o número e o salário calculado do funcionário, com duas casas decimais[cite: 9].
- A impressão deve seguir o formato com as mensagens "NUMBER = " e "SALARY = U$ "[cite: 9].

**Fórmula aplicada:**
$$Salario = HorasTrabalhadas \times ValorPorHora$$

## 💻 Soluções Implementadas

O problema foi resolvido em três linguagens distintas, localizadas nas seguintes pastas do diretório `ex012`[cite: 8]:

- **C:** `c/main.c`[cite: 8].
- **Java:** `java/Main.java`[cite: 8].
- **Python:** `python/main.py`[cite: 8] (utilizando *list comprehension* para a leitura dos dados e *f-strings* para formatar a saída com precisão decimal[cite: 8]).

## 🚀 Como Executar

Para testar qualquer uma das soluções, navegue até à diretoria raiz do exercício (`ex012`) e execute os comandos correspondentes no terminal:

### C
```bash
gcc c/main.c -o salario
./salario
