// 09_inheritance protected and private.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
class A
{
	protected:	//	protected 只有兒子才能使用
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

class B : public A	//	若為 private 到他兒子的時候就不公開申報了 私有財
{
	public:
		int b;
		B()
		{
			//	aa = 0;		//	若 aa 為 A 的 private 會失敗因為是A的私有財
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
	y.a;

	return 0;
}

