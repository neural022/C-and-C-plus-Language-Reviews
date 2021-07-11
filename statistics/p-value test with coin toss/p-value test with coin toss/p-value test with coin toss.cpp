// p-value test with coin toss.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"
#include  "math.h"


float u() { return rand()*1.0 / RAND_MAX; }

float b(float p)
{
	if (u() > p) return 0;
	return 1;
}


int toss(int n)
{
	int m = 0;
	for (int i = 0; i < n; i++) m += b(0.5);
	return m;
}

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}


int main()
{
	//	coin toss
	//	toss of 20
	//	simulation of 10000
	srand(time(NULL)); rand();

	int n = 0;
	for (int i = 0; i < 10000; i++)
	{
		int m = toss(20);
		if (m >= 16) n++;
	}
	printf("%.4f\n", n / 10000.0);

	return 0;
}

