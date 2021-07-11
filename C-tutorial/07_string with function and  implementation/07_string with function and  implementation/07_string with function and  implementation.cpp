// 07_string with function and  implementation.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

int strlen(char s[])
{
	int n = 0;
	//	source string !=0 continue to count length
	while (s[n] != 0) n++;
	return n;
}

void strcpy(char d[], char s[])
{
	int n = 0;
	//	source string !=0 countinue change
	while (s[n] != 0)
	{
		d[n] = s[n];
		n++;
	}
	d[n] = 0;
}

int strcpm(char d[], char s[])
{
	int n = 0;
	//	a string == b string countinue to compare, and a string  != 0
	while (d[n] == s[n] && d[n] != 0) n++;
	if (d[n] > s[n]) return 1;
	else if (d[n] < s[n]) return-1;
	return 0;
}

int main()
{
	char a[10] = "ABCD";
	char b[10] = "XXX";

	printf("%d\n", strcpm(a, b));

	return 0;
}


