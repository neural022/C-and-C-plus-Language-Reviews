// 010_inheritance and friendship.cpp : 定義主控台應用程式的進入點。
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
		friend class A; //	A 可以偷看到 C 的 c 小三
};

class A
{
	protected:	//	只有兒子才能用
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
		void AA(C w)	//	A類別下的建構子 AA 傳入C類別的 w 這個物件
		{
			w.c = 10;	//	因為 C 是 A 的朋友所以可以改寫
		}
};

class B : public A
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
	//	z.c;無法存取 因為 C 的 c 是 private
	// y.aa;無法存取 因為只有他兒子B才能用

	return 0;
}

