// 03_overloading.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

class xxx
{
public:

	//	data member:
	//	There is not any data member in this example.
	int a;
	float xa;

	// method member:
	//	constructor (建構子) aim to call automatically in an object created,
	//	and its main purpose is the initialization of the data member.


	//	overloading (多載)
	//	A class can have multiple constructtors.
	//	The system will automatically call the suitable constructors according to the parameters of the type.

	//	constructor 1
	xxx()
	{
		a = 0;
		xa = 0;
	}
	//	constructor 2
	xxx(int aa)
	{
		a = aa;
		xa = 0;
	}
	//	constructor 3
	xxx(float aa)
	{
		a = 0;
		xa = aa;
	}
	// constructor 4
	xxx(int aaa, float aa)
	{
		a = aaa;
		xa = aa;
	}

	//	destructor (解構子) aims to call automatically in an object dies.
	//	and its main purpose is to return system memory.
	~xxx()
	{

	}
};

int main()
{
	//	No matter how many parameters are passed in (0 or 100),
	//	only the multiple constructors under the b object will be executed.

	//	xxx b(10);
	//	xxx b(100);
	//	xxx b(float(100.0));
	xxx b(10, 100.0);

	printf("%d\n", b.a);
	printf("%f\n", b.xa);

	return 0;
}