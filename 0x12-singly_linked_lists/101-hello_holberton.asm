section .data
	print: db "Hello, Holberton", 10,0

section .text
	global start

start:
	mov rax, 1
	mov rdi, 1
	mov rsi, print
	mov rdx, len
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
