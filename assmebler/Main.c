// assmebler.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Source.h"


int main()
{
	
	system("chcp 1251 >null");
	int a = 3; 
	int b = 4;
	int c = 7;
	int _i = 1000000;
	int* m = calloc(2, sizeof(int));

	int s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		sum(a, b);
	}
	int e = clock();

	printf("Сумма %d\n", e);

	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		minus(a, b);
	}
	e = clock();

	printf("Разность %d\n", e);
	e = 0;
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		multp(a, b);
	}
	e = clock();
	printf("Умножение %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		delen(a, b);
	}
	e = clock();
	printf("Деление %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo(a, b);
	}
	e = clock();

	printf("Сравнение двух %d\n", s);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree(a, b,c);
	}
	e = clock();

	printf("Сравнение трёх %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		sum_asm(a, b);
	}
	e = clock();

	printf("Сумма асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		minus_asm(a, b);
	}
	e = clock();

	printf("Разность асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		multp_asm(a, b);
	}
	e = clock();
	printf("Умножение асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		delen_asm(a, b);
	}
	e = clock();
	printf("Деление асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo_asm(a, b);
	}
	e = clock();
	printf("Сравнение двух асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree_asm(a, b, c);
	}
	e = clock();
	printf("Сравнение треёх асм %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		change_C(m, b, c);
	}
	e = clock();
	printf("Замена местами двух чисел си %d\n", e);
	s = clock();
	for (size_t i = 0; i < _i; i++)
	{
		change_asm(m, b, c);
	}
	e = clock();
	printf("Замена местами двух чисел асм %d\n", e);
}




