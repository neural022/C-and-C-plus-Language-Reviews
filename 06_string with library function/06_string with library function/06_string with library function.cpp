// 06_string with library function.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
//	include string library
#include "string.h"
#include "stdio.h"


int main()
{
	//	function 1:
	//	strlen(a):%d
	//	return string length:

	//	function 2:
	//	strcpy(dest,source):%s
	//	source instead of dest
	//	strcpy(a+strlen(a), b)
	//	a move string length n and b start with n+1
	
	//	function 3:
	//	strcat(dest,source):%s
	//	same as strcpy(a+strlen(a),b) 

	//	function 4:
	//	strcmp(a,b):%d
	//	return compare result value
	//	if a<b return-1 else retrun 1

	//	function 5:
	//	strstr(a, b):%d
	//	returns the position of the first occurrence of the string 'b' in the string 'a'

	//	 function 6:
	//	strrev(a):%s
	//	invert the string 'a'

	//	function 7:
	//	When using scanf to read a string, it will end when it encounters a space character.
	//	such as "Hello! John!" -> Then the string read in is only "Hello!"
	//	solution: use gets() 、puts(), define in stdio.h
	//	gets() scanf string, then puts() print string：

	//	example 1 with function 1-6
	char a[10] = "ABCD";
	char b[10] = "XXX";
	printf("%d\n",strcmp(a,b));

	// example 2 with function 7
	char c[20];
	char d[20];

	gets_s(c);
	scanf("%s", d);
	printf("%s\n", c);
	printf("%s\n", d);

    return 0;
}

