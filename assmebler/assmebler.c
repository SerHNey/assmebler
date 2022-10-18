// assmebler.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h> 
#include <stdio.h>
int remainder(int a, int b);

int main()
{
	system("chcp 1251 >null");
	printf("%d \n",comparisoninttwo(1, 2));
	printf("%d \n", remainder(12,5));
	printf("%d \n", multp_asm(2,5));


}
int sum(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b;}
int multp(int a, int b) { return a * b;}
int delen(int a, int b) { return a / b;}
int comparisoninttwo(int a, int b) {
	if (a > b)
		return 1;
	else if (b > a)
		return 2;
	else 
		return 0;
}
int comparisonintthree(int a, int b, int c) {
	if ((a >= b) && (a >= c)) 
		return 1;
	else if ((b >= a) && (b >= c)) 
		return 2;
	else if ((c >= a) && (c >= b)) 
		return 3;
	else if (a == b && b == c)
		return 0;
}
int remainder(int a, int b) {
	return a % b;
}
int* Swap_C(int* a, int i, int _i) {
	int n = a[i];
	a[i] = _i;
	a[_i] = n;
}


int sum_asm(int a, int b) {
	_asm 
	{
		mov eax, a
		mov ebx ,b
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
	return a / b; 
}
int comparisoninttwo_asm(int a, int b) {
	if (a > b)
		return 1;
	else if (b > a)
		return 2;
	else
		return 0;
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