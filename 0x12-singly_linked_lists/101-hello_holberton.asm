section .data
    hello_message db "Hello, Holberton", 0
    newline db 10          ; ASCII code for newline

section .text
    global main

extern printf

main:
    sub rsp, 8           ; Align the stack

    mov rdi, hello_message
    call printf

    mov rdi, newline
    call printf

    add rsp, 8           ; Restore the stack
    mov eax, 0           ; Return 0
    ret

