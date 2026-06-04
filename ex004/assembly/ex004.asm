section .data
  pi: dq 3.14159
  x: db "X="

section .text
  global _start

_start:
  li a7, 7
  ecall
  
  mv t0, a0

  mul t0, t0, t0

  li t1, pi

  mul t0, t1, t0

  mv a0, t0
  li a7, 3
  ecall
