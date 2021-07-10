// 04_array.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


int main()
{

	//	example 1: 2N
	//	array 1
	int a[10];

	for (int i = 0; i < 10; i++) scanf("%d", &a[i]);
	for (int i = 0; i < 10; i++)  a[i] *= 2;
	for (int i = 0; i < 10; i++)  printf("%d\n", a[i]);

	printf("\n\n");

	//	example 2: fibonacci sequence
	//	array 2
	int b[11];

	b[0] = 0, b[1] = 1;

	for (int i = 2; i <= 10; i++) b[i] = b[i - 1] + b[i - 2];
	for (int i = 1; i < 11; i++) printf("%d\n", b[i]);

    return 0;
}

