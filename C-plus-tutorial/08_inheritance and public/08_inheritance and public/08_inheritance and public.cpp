// 08_inheritance and public.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

class A
{
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

class B : public A	//	B繼承A的東西
{
	public:
		int b;
		B()
		{
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
	//	A x;
	B y;	//	若宣告A自己則會出現兩次 一次是自己一次是師傅 
			//	學生會先死亡

	return 0;
}

