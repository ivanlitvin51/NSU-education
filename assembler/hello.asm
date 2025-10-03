default rel

section .data
    msg db "Hello, world!", 10
    len equ $ - msg

section .text
    global _start

_start:
    ; write(1, msg, len)
    mov rax, 0x2000004     ; sys_write в macOS
    mov rdi, 1             ; stdout
    lea rsi, [msg]
    mov rdx, len
    syscall

    ; exit(0)
    mov rax, 0x2000001     ; sys_exit в macOS
    xor rdi, rdi
    syscall