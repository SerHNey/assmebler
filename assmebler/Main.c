// assmebler.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Source.h"

int main()
{
	system("chcp 1251 >null");
	//printf("%d \n",comparisoninttwo(1, 2));
	//printf("%d \n", remainder(12,5));
	//printf("%d \n", multp_asm(2,5));
	//printf("%d \n", comparisoninttwo_asm(5, 5));
	//printf("%d \n", delen_asm(6, 3));
	//printf("%d \n", comparisoninttwo_asm(3, 3));
	int a = 3;
	int b = 4;
	int c = 7;
	int _i = 10000000;
	for (size_t i = 0; i < _i; i++)
	{
		sum(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		 minus(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		multp(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		delen(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree(a, b,c);
	}
	for (size_t i = 0; i < _i; i++)
	{
		sum_asm(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		minus_asm(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		multp_asm(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		delen_asm(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo_asm(a, b);
	}
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree_asm(a, b, c);
	}
}




