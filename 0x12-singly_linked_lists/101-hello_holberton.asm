	global main
	extern printf

main:
	mov edi, msg	; the printf msg is the first argument to be passed
	xor eax, eax	; clear eax
	call printf	; call printf
	mov	 eax, 0	; clear eax
	ret		;return
msg:db `Hello, Holberton\n`,0
