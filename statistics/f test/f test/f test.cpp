// f test.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"
#include  "math.h"

float u() { return rand()*1.0 / RAND_MAX; }

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}
//	Chi-square
float x2(int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		float x = z();
		sum += x * x;
	}
	return sum;
}


float f(int m, int n)
{
	return x2(m) / x2(n);
}


int main()
{
	srand(time(NULL)); rand();

	int n = 0;
	for (int i = 0; i < 10000; i++)
	{
		float x = f(20, 10);
		if (x > 200 / 30) n++;
	}
	printf("%.4f\n", n / 10000.0);

	return 0;
}
