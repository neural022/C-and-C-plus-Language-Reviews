// 09_normal distribution with height simulation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include"stdlib.h"
#include"time.h"

float u()
{
	return(rand()*1.0 / RAND_MAX);
}

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}

int main()
{
	//	boy  mean height = 170cm, standard deviation = 5
	//	girl mean height = 158cm, standard deviation = 4
	//	a total of 45 in class
	//	question:calculate  girl > boy probability

	float x, y;
	int n = 0;

	srand(time(NULL)); rand();
	for (int j = 0; j < 45; j++)
	{
		x = z() * 5 + 170;
		y = z() * 4 + 158;
		if (x < y) n++;
	}
	printf("女生大於男生的機率為%6.2f\n", n*1.0 / 45);

    return 0;
}

