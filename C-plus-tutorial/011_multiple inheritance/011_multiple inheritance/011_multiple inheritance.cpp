// 011_multiple inheritance.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
class A;

class C
{
	private:
		int c;
	public:
		C()
		{
			c = 0;
		}
		~C()
		{

		}
		friend class A; //	A 可以偷看到 C 的 c
};

class A	//	father
{
	protected:
		int aa;
	public:
		int a;
		A()
		{
			a = 0;
			printf("A()\n");
		}
		~A()
		{
			printf("~A()\n");
		}
};

class D //	mother
{
	public:
		int d;
		D()
		{
			d = 0;
			printf("D()\n");
		}
		~D()
		{
			printf("~D()\n");
		}
};

class B : public A, public D	//	多重繼承
{
	public:
		int b;
		B()
		{
			aa = 0;
			b = 0;
			printf("B()\n");
		}
		~B()
		{
			printf("~B()\n");
		}
};


int main()
{
	B y;
	C z;
	//y. 可以看到father class A and mother class C



	return 0;
}

