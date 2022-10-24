#include "Source.h"

int sum(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multp(int a, int b) { return a * b; }
int delen(int a, int b) { return a / b; }
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