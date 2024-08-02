section		.text
	extern	printf
	global	main

main:
	mov		edi, stg
	mov		eax, 0
	call	pritf

section		.data
	stg db 'Hello, Holberton', 0xa, 0
