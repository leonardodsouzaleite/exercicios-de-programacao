.global _start

_start:
    li a7, 1

    li t0, 0
    li t1, 1

    li t4, 11

fibonacci:
    beq t4, zero, fim

    mv a0, t0
    li a7, 1
    ecall

    add t3, t0, t1
    mv t0, t1
    mv t1, t3

    addi t4, t4, -1
    j fibonacci

fim:
    li a7, 10
    ecall
