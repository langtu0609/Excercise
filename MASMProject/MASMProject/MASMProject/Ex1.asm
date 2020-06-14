include IrvineLib\Irvine32.inc

.data
InputMsg	db	"Please input number: ", 0
OutputMsg	db	"Result = ", 0

.code
main proc
	mov		edx, OFFSET InputMsg
	call	WriteString
	call	ReadInt

	mov		ebx, 1
	add		ebx, eax
	mul		ebx
	shr		eax, 1

	mov		edx, OFFSET	OutputMsg
	call	WriteString
	call	WriteInt

	xor		eax, eax
	ret
main endp
end main