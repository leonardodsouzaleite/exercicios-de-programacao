.section .text
.globl main

main:
    li a7, 5
    ecall
    mv t1, a0

    li a7, 5
    ecall
    mv t2, a0

    add t3, t1, t2

    li a7, 1
    mv a0, t3
    ecall

    li a7, 10
    ecall
