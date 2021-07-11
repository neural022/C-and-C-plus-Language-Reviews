// penghu wind power with statistics.cpp : 定義主控台應用程式的進入點。
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

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}

int main()
{
	srand(time(NULL)); rand();

	float sum = 0;
	for (int i = 0; i < 10000; i++)
	{
		float v = z() * 5.0 + 8.0;
		float q = 0;
		if (v < 5.0) q = 0;
		else if (v > 20.0) q = 0;
		else if (v > 15.0) q = 1;
		else q = (v - 5.0) * 0.1;
		sum += q;
	}
	printf("%.4f\n", sum / 10000.0);

	return 0;
}



