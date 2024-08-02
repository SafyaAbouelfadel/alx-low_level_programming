section		.text
	extern	printf
	global	main

main:
	mov		edi, string
	mov		eax, 0
	call	pritf

section		.data
	string db 'Hello, Holberton', 0xa, 0
