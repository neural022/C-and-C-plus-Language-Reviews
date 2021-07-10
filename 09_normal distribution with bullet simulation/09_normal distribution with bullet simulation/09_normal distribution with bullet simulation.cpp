// 09_normal distribution with bullet simulation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

float u()
{
	return (rand()*1.0 / RAND_MAX);
}
float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6;
}

int main()
{
	//	army mean height = 175cm, standard deviation = 5
	//	bullet shoot height = between 170 to 180cm
	//	a total of 100 in army
	//	question: calculate survival probability
	
	float x, y;
	int n = 0;
	srand(time(NULL)); rand();

	for (int i = 0; i < 100; i++)
	{
		x = z() * 5 + 175;	//	army
		y = u() * 10 + 170;	//	bullet
		if (x < y) n++;
	}
	printf("存活機率%f\n", n*1.0 / 100);
    return 0;
}

