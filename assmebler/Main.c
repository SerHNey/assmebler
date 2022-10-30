// assmebler.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Source.h"

int write() {
	
		time_t start, end;
		volatile long unsigned t;

		start = time(NULL);
		for (size_t i = 0; i < 10000000; i++)
		{
			sum(5, 2);
		}
		end = time(NULL);
		printf("Цикл использовал %f секунд.\n", difftime(end, start));

		return 0;
	
}

int main()
{
	
	system("chcp 1251 >null");
	write();
	printf("%d \n",comparisoninttwo(1, 2));
	printf("%d \n", remainder_asm(12,5));
	printf("%d \n", multp_asm(2,5));
	printf("%d \n", comparisoninttwo_asm(1, 5));
	printf("%d \n", delen_asm(6, 3));
	printf("%d \n", comparisonintthree_asm(2, 3,3));



	int a = 3; 
	int b = 4;
	int c = 7;
	int _i = 100000;
	double time_spent = 0.0;
	clock_t begin = clock();
	for (size_t i = 0; i < 100000; i++)
	{
		sum(a, b);

	}
	clock_t end = clock();
	time_spent = (double)(end - begin);
	printf("Сумма %f\n", time_spent);

	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		minus(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Разность %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		multp(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Умножение %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		delen(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Деление %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Сравнение двух %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree(a, b,c);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Сравнение трёх %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		sum_asm(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Сумма асм %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		minus_asm(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Разность асм %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		multp_asm(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Умножение асм %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		delen_asm(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Деление асм %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisoninttwo_asm(a, b);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Сравнение двух асм %f\n", time_spent);
	begin = clock();
	for (size_t i = 0; i < _i; i++)
	{
		comparisonintthree_asm(a, b, c);
	}
	end = clock();
	time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Сравнение треёх асм %f\n", time_spent);
}




