extern printf

section .data
msg: db "Hello, Holberton", 10
fmt: db "%s", 10, 0

section .text
global main

main:
push rbp
mov rdi, fmt
mov rsi, msg
xor rax, rax
call printf
pop rbp
xor rax, rax
ret
