// 01_loop with print star.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"


//	A basic of 4 instructions to write a program
//	(1) Write 
//	(2) Read 
//	(3) If...then... 
//	(4) Goto 
int main()
{
	//	example 1:write
	printf("Hello World\n\n");

	//	example 2: loop with if and goto
	int n = 0;

A:	if (n<10)
	{
		printf("hello\n");
		n++;
		goto A;
	}
	printf("\n");

	//	example 3: while-loop
	n = 0;

	while (n<10)
	{
		printf("while\n");
		n++;
	}
	printf("\n");

	//	example 4: for-loop
	for (int n = 0; n < 10; n++) printf("for\n");
	printf("\n");

	// example 5: print rectangle by 10x10 with for-loop
	for (int n = 0; n<10; n++)
	{
		for (int m = 0; m<10; m++) printf("x");
		printf("\n");
	}
	printf("\n");

	// example 6: use 'x' symbol print various triangle with for-loop
	
	// lower left
	for (int n = 0; n < 5; n++)
	{
		for (int m = 0; m < n + 1; m++) printf("x");
		printf("\n");
	}
	printf("\n");

	//	upper left
	for (int n = 0; n<5; n++)
	{
		for (int m = 0; m < 5 - n; m++) printf("x");
		printf("\n");
	}
	printf("\n");

	//	upper right
	//	case 1
	for (int n = 0; n<5; n++)
	{
		for (int m = 0; m < 5 - n; m++) printf("x");
		printf("\n");
		for (int o = 0; o < n + 1; o++) printf(" ");
	}
	printf("\n");
	//	case 2
	for (int n = 0; n < 5; n++)
	{
		for (int m = 0; m<n; m++) printf(" ");
		for (int o = 4; o >= n; o--) printf("x");
		printf("\n");
	}
	printf("\n");

	//	lower right
	for (int n = 0; n<5; n++)
	{
		for (int m = 0; m < 4 - n; m++) printf(" ");
		for (int o = 0; o < n + 1; o++) printf("x");
		printf("\n");
	}
	printf("\n");

    return 0;
}

