section .data				;.data main here
msg db "Hello, Holberton", 10		;String gets initialized
l equ $-msg				;Length Of String

section .text				;.text starts here

global main				;Moving to main

main:					;_start label
mov rax,1				;Sys_Write Function
mov rdi,1				;Std_Out File Descriptor
mov rsi,msg				;Offset of msg
mov rdx,l				;Length Of msg
syscall					;Call the Kernel
mov rax,60				;Sys_Exit Function
mov rdi,0				;Sucessful Termination

syscall					;Call The Kernel
end:					;end Label
