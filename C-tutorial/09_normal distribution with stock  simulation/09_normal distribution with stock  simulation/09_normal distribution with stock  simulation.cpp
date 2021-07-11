// 09_normal distribution with stock  simulation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdlib.h"
#include "time.h"

float u()
{
	return rand()*1.0 / RAND_MAX;
}

float z()
{
	float sum = 0;
	for (int i = 0; i < 12; i++) sum += u();
	return sum - 6.0;
}

int main()
{

	//	stock price rise and fall simulation
	//	start stock price = 100 dollars
	//	price ups and downs +-10%
	//	simulation of 1000
	//	question: calculate the stock price will be higher than 120 after 20 days probability
	
	float x, y;
	int n = 0;

	srand(time(NULL)); rand();
	for (int i = 0; i < 1000; i++)
	{
		x = 100;
		for (int j = 0; j < 20; j++) x = x*(0.9 + u()*0.2); // x = x*(1.0+z()*0.05);
		if (x > 120) n++;
	}
	printf("%f\n", n*1.0 / 1000);

	return 0;
}