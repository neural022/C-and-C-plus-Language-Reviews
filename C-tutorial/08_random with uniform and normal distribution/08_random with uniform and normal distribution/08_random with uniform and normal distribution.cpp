// 08_random with uniform and normal distribution.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"
#include "time.h"

// uniform distribution random
float u()
{
	return (rand()*1.0 / RAND_MAX);//0~1之間浮點數
}

//	normal distribution random, mean = 0, standard deviation = 1
float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();	//	float between 0 to 12
	return sum - 6;								//	float between -6 to 6
}
int main()
{
	float  sum = 0, a;
	//	random seed set time and shuffle
	//	generate N normal distribution random z()
	srand(time(NULL)); rand();
	for (int i = 0; i < 10000; i++)
	{
		a = z();
		sum += a*a;	//	sum = sum+a*a
	}
	//	standard deviation 
	printf("%f\n", sum / 10000);
	return 0;
}
