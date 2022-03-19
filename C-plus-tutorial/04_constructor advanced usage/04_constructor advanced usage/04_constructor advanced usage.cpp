// 04_constructor advanced usage.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

class xxx
{
	public:
		//	data member
		int a;
		float xa;
		//	method member
		xxx()
		{
			a = 0;
			xa = 0;
		}

		xxx(int a)
		{
			//	this object's a = parameter's a
			this->a = a;
			xa = 0;
		}
		xxx(float xa)
		{
			a = 0;
			this->xa = xa;
		}
		xxx(int a, float xa)
		{
			this->a = a;
			this->xa = xa;
		}


		~xxx()
		{

		}
};

// global variables (playground)
int a = 10;

void xxxx()
{
	a = 20;
}

int main()
{
	//	int a = 30;
	xxx b(10, 100.0);

	//	xxxx();
	printf("%d\n", a);

	printf("%d\n", b.a);
	printf("%f\n", b.xa);

	return 0;
}

