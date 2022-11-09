#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <time.h>
#include <malloc.h>
#include <string.h> 
#include <stdio.h>   
#include <time.h>


int remainder(int a, int b);
int sum(int a, int b);
int minus(int a, int b);
int multp(int a, int b);
int delen(int a, int b);
int comparisoninttwo(int a, int b);
int comparisonintthree(int a, int b, int c);
int* change_C(int* a, int i, int _i);

int remainder_asm(int a, int b);
int sum_asm(int a, int b);
int minus_asm(int a, int b);
int multp_asm(int a, int b);
int delen_asm(int a, int b);
int comparisoninttwo_asm(int a, int b);
int comparisonintthree_asm(int a, int b, int c);
int* change_asm(int* massiv, int m, int mm);
