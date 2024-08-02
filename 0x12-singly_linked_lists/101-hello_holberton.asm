section		.text
	extern	printf
	global	main

main:
	mov 		edi, ab
	mov 		eax, 0
	call	pritf


section 	.data
	ab db 'Hello, Holberton', 0xa, 0
