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
	__asm
	{
		mov eax, a
		mov ebx, b
		cmp eax, ebx;
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
	if ((a >= b) && (a >= c))
		return 1;
	else if ((b >= a) && (b >= c))
		return 2;
	else if ((c >= a) && (c >= b))
		return 3;
	else if (a == b && b == c)
		return 0;
}
int remainder_asm(int a, int b) {
	return a % b;
}
int* Swap_C_asm(int* a, int i, int _i) {
	int n = a[i];
	a[i] = _i;
	a[_i] = n;
}