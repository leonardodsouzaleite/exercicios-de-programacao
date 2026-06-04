  .data
message: .asciz "Hello World!\n"
    .text
    .global start
start:
    li a7, 4
    la a0, message
    ecall

    li a7, 10
    ecall
