// 11_pointer.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

//	example 6 function
void xxx(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	//	example 1:
	/*int a = 100;
	int b;
	b = 10;
	b = *(&a);
	printf("%x\n", b);*/

	//	example 2:
	/*int a = 100;
	int *b;
	b = &a;
	*b = 200;
	printf("%d\n", a);		
	printf("%d\n", *(b));*/

	//	example 3:
	/*int a[10];
	int *b;
	a[0] = 10;
	b = a;
	printf("%d\n", *(b));*/

	//	example 4:
	/*int a[10];
	int *b;
	a[0] = 10;
	b = a;
	*b = 20;
	printf("%d\n", a[0]);*/

	//	example 5:
	/*int a[10];
	int *b;
	a[0] = 10;
	b = a;
	*(b + 1) = 20;
	printf("%d\n", a[1]);*/


	//	example 6:
	/*int a = 10;
	int b = 20;
	xxx(&a, &b);
	printf("%d\n", b);*/

	//	example 7:
	/*int a[10];
	int c;
	c = *a;
	*(a + 1) = 20;
	c = *(a + 1);
	c = *(a)+1;
	c = *a + 1;
	printf("%d\n", c);*/

    return 0;
}

