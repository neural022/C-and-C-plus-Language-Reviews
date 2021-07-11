// calculus.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"
#include  "math.h"

float u() { return rand()*1.0 / RAND_MAX; }

int main()
{
	srand(time(NULL)); rand();

	int n = 0;
	for (int i = 0; i < 10000; i++)
	{
		float x = u()*2.0 + 1.0;
		float y = u() * 50.0;
		if (y < 3 * x*x + 6 * x - 3) n++;
	}
	printf("%.4f\n", n / 10000.0 * 100);

	return 0;
}

