import random

vetor = []

for i in range(10):
    vetor.append(random.randint(0, 100))

a = 1
b = 10

# Ordenasão Booble Sort

print(vetor)

while a != 0:
    a = 0
    for i in range(b - 1):
        t1 = vetor[i]
        t2 = vetor[i + 1]
        if t1 > t2:
            temporario = t1
            t1 = t2
            t2 = temporario
            a += 1
        vetor[i] = t1
        vetor[i + 1] = t2

print(vetor)
