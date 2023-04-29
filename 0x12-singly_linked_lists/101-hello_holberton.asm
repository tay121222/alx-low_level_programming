extern printf

section .data
msg: db "Hello, Holberton", 10

section .text
global main

main:
push rbp
mov rdi, msg
mov rax, 0
call printf
pop rbp
mov rax, 0
ret
