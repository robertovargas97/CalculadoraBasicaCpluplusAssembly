.model flat , C
.586
.stack 4096

PUBLIC _sumaE
PUBLIC valorAbs
PUBLIC _restaE
PUBLIC _multE
PUBLIC _divE

EXTERN puts:PROC

.data

.code


_sumaE proc  uses ebx ecx , \
numb:dword , \
num:dword 
	mov eax, numb
	add eax,num   
  ret
_sumaE endp

_restaE proc  uses ebx ecx , \
numb:dword , \
num:dword

	mov eax, numb
	sub eax,num   

  ret
_restaE endp

_multE proc  uses ebx ecx , \
numb:dword , \
num:dword 
	mov eax, numb
	mul num   
  ret
_multE endp

_divE proc  uses ebx ecx , \
numb:dword , \
num:dword 
	mov eax, numb
	div num   
  ret
_divE endp

valorAbs proc  uses ebx, \
nega:dword 

	cmp nega,0
	jg exit
	neg nega

exit:
	mov eax,nega

  ret
valorAbs endp

END