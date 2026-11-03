# Beecrowd 1009 - Salário com Bônus

Este diretório contém as minhas resoluções para o problema **1009 (Salário com Bônus)** do [Beecrowd](https://judge.beecrowd.com/pt/problems/view/1009)[cite: 9]. Este é um projeto prático pessoal com o objetivo de manter a fluência nas linguagens de programação que utilizo.

## 🎯 O Problema

O exercício pede a criação de um programa que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro)[cite: 9]. O vendedor ganha 15% de comissão sobre as suas vendas efetuadas, e o programa deve informar o total a receber no final do mês[cite: 9].

- A entrada contém um texto (primeiro nome do vendedor) e 2 valores de dupla precisão (`double`) com duas casas decimais, representando o salário fixo do vendedor e o montante total das vendas efetuadas, respectivamente[cite: 9].
- A saída deve imprimir o total que o funcionário deverá receber, com duas casas decimais[cite: 9].
- A impressão deve seguir o formato com a mensagem "TOTAL = R$ "[cite: 9].

**Fórmula aplicada:**
$$Total = SalarioFixo + (TotalVendas \times 0.15)$$

## 💻 Soluções Implementadas

O problema foi resolvido em três linguagens distintas, localizadas nas seguintes pastas do diretório `ex013`[cite: 10]:

- **C:** `c/main.c`[cite: 10].
- **Java:** `java/Main.java`[cite: 10].
- **Python:** `python/main.py`[cite: 10].

## 🚀 Como Executar

Para testar qualquer uma das soluções, navegue até à diretoria raiz do exercício (`ex013`) e execute os comandos correspondentes no terminal:

### C
```bash
gcc c/main.c -o bonus
./bonus
