// 09_normal distribution with max height simulation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"
#include "math.h"

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
	//	boy  mean height = 175cm, standard deviation = 4
	//	girl mean height = 173cm, standard deviation = 6
	//	a total of 200 in class
	//	simulation of 1000
	//	question:calculate  max girl > max boy probability

	int n = 0;
	srand(time(NULL)); rand();
	for (int i = 0; i < 10000; i++)
	{
		float x, y;
		float maxx1 = 0;
		float maxx2 = 0;
		for (int j = 0; j < 200; j++)
		{
			x = z() * 4 + 175;
			y = z() * 6 + 173;
			if (x > maxx1) maxx1 = x;
			if (y > maxx2) maxx2 = y;
		}
		if (maxx1 > maxx2) n++;
	}
	printf("資管最高的次數是%6.2f\n", n*1.0 / 10000);

    return 0;
}

