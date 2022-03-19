// 02_ member and constructor-destructor.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

class xxx
{
	public:
		//	The class is divided into two sections : data member & method member.
		//	

		//	data member:
		//	There is not any data member in this example.

		// method member:
		//	constructor (建構子) aim to call automatically in an object created,
		//	and its main purpose is the initialization of the data member
		xxx()
		{
			printf("xxx\n");
		}
		//	destructor (解構子) aims to call automatically in an object dies,
		//	and its main purpose is to return system memory.
		~xxx()
		{
			printf("~xxx\n");
		}
};

int main()
{

	xxx b;
	printf("hello\n");

	return 0;
}

