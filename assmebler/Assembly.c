#include "Source.h"

int sum_asm(int a, int b) {

	_asm
	{
		mov eax, a
		mov ebx, b
		add eax, ebx
		mov b, eax
	}
	return b;
}
int minus_asm(int a, int b) {
	_asm {
		mov eax, a
		mov ebx, b
		sub eax, ebx
		mov b, eax
	}
	return b;
}
int multp_asm(int a, int b) {
	_asm {
		mov eax, a
		mov ebx, b

		imul eax, ebx
		mov a, eax
	}
	return a;
}
int delen_asm(int a, int b) {
	_asm {
		mov eax, a
		mov ebx, b
		mov edx, 1
		idiv ebx
		mov a, ebx
	}
	return a;
}
int comparisoninttwo_asm(int a, int b) {
	_asm {
		mov eax, a
		mov ebx, b
		cmp eax, ebx

		je equal
		jg greater
		jmp less

		equal :
		mov a, 0
			jmp exit

			greater :
		mov a, 1
			jmp exit

			less :
		mov a, 2
			jmp exit
			exit :
	}
	return a;
}
int comparisonintthree_asm(int a, int b, int c) {
	_asm
	{
		mov eax, a
		mov ebx, b
		mov ecx, c
		cmp eax, ebx
		je equal
		jg greater
		jmp less


		equal :
		cmp eax, ecx
			je equal2
			jg greater2
			jmp less2

			greater :
		cmp eax, ecx
			je equal2
			jg greater2
			jmp less2

			less :
		cmp ebx, ecx
			je equal2
			jg greater3
			jmp less2



		equal2:
		mov a, 0
			jmp exit

			greater2 :
		mov a, 1
			jmp exit

			less2 :
		mov a, 3
			jmp exit

			greater3 :
		mov a, 2
			jmp exit

			exit :
	}
	return a;
}
int remainder_asm(int a, int b) {
	_asm {
		mov eax, a
		mov ebx, b
		mov edx, 0
		idiv ebx
		mov a, edx
	}
	return a;
}
int* Swap_C_asm(int* massiv, int m, int mm) {
	int a = massiv[m], b = massiv[mm];
	_asm
	{
		mov eax, a
		mov ebx, b
		mov ecx, eax
		mov ebx, eax
		mov ebx, ecx
		mov a, eax
		mov b, ebx
	}
	massiv[m] = a;
	massiv[mm] = b;
	return massiv;
}