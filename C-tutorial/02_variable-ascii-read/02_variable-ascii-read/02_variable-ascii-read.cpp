// 02_variable-ascii-read.cpp : 定義主控台應用程式的進入點。
//
#include "stdafx.h"

int main()
{
	//	example 1: variable
	//	(1)	read out the data of c,
	//		and write the data on the right into the memory on the left
	//	(2)	the information on the right is converted into binary
	int c, d;
	c = 10;
	d = c;

	//	example 2: int float character
	int e;
	float f;
	char g;

	e = 10;
	f = 0.6;
	g = 'a';

	printf("hello\n");
	printf("%d\n\n\n", e);

	//	example 3: print ascii table character 'A' decimal value
	printf("%c\n", 'A');
	printf("%c=%d\n\n\n", 'A', 'A');

	//	example 4: print ascii table character's decimal value with for-loop 
	for (int i = 0; i < 128; i++) printf("%c=%d%\n", i, i);
	printf("\n");

	//	example 5: print ascii table character's decimal value with for-loop 
	int j = 0;
	while (j < 128)
	{
		printf("%c=%d\n", j, j);
		j++;
	}
	printf("\n");

	//	example 6: 9x9 multiplication table-horizontal
	int k;
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			k = i*j;
			printf("%dx%d=%2d\t", i, j, k);
		}
		printf("\n");
	}
	printf("\n\n");

	//	example 7: 9x9 multiplication table-vertical
	for (int i = 1; i<10; i++)
	{
		for (j = 1; j<10; j++)
		{
			k = j*i;
			printf("%dx%d=%2d\t", j, i, k);
		}
		printf("\n");
	}
	printf("\n");

	//	example 8: read input 
	int o, p, q;

	scanf("%d", &o);
	scanf("%d", &p);

	q = o + p;
	printf("%d\n", q);

	if (q > 10) printf("good\n");
	else printf("bad\n");



	return 0;
}

