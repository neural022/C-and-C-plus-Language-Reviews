// 03_print equilateral triangle-power-gcd and lcm.cpp : ﹚竡北莱ノ祘Α秈翴
//

#include "stdafx.h"

int main()
{
	// example 1: print leaf
	int c = 1;
	for (int i = 0; i < 15; i++)
	{
		for (int j = 0; j < 15 - i; j++) printf(" ");
		for (int k = 0; k < c; k++)  printf("*");
		printf("\n");
		c += 2;	//	c = c + 2;
	}
	//	print trunk
	for (int i = 0; i < 7; i++)
	{
		for (int j = 0; j < 12; j++) printf(" ");
		for (int k = 0; k < 7; k++) printf("*");
		printf("\n");
	}

	//	example 2: print power of 2 and solve int 32bits question
	float sum = 1;
	for (int i = 1; i < 33; i++)
	{
		sum *= 2;
		printf("2%dΩよ琌%f\n", i, sum); //	%f represent decimal float
	}
	printf("\n\n");

	//	example 3: gcd and lcm
	int a, b, d, e, t;

	scanf("%d", &a);
	scanf("%d", &b);
	//	change
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	d = a*b;
	//	gcd
	while (a%b != 0)
	{
		t = b;
		b = a%b;
		a = t;
	}
	printf("程そ计琌%d", b);
	printf("\n");

	//	lcm
	e = d / b;
	printf("程そ计琌%d", e);

	return 0;
}

