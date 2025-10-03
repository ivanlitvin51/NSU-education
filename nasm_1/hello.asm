BITS 64
default rel

section .data
    fmt db "Hello, world!", 10, 0

section .text
    global _main
    extern _printf

_main:
    ; rdi=fmt (1-й аргумент для printf в SysV ABI)
    lea     rdi, [rel fmt]
    xor     eax, eax         ; число XMM-аргументов = 0
    call    _printf

    xor     eax, eax
    ret
