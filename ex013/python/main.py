nome = input()
fixo, venda = [float(input()) for _ in range(2)]

total = fixo + (venda * 0.15)

print(f"TOTAL = R$ {total:.2}")

