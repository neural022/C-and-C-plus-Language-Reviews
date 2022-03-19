// 033_polymorphism.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	//  c++: polymorphism (多型)
	//	公司設計軟體為了讓所有要使用 xxx 類別 規範了一個規則
	//	所有成員都需遵循此規則 pp()
	//	若有成員不遵循 rule 還是能建置執行 (因為 xxx 的 pp()沒有做任何事)
	public:
		void pp()
		{

		}
};
class A : public xxx	//	A 繼承 xxx
{
	int a;
	public:
		A() { a = 0; }
		void pp()
		{
			cout << a << endl;
		}
};
class B : public xxx	// B 繼承 xxx
{
	char b;
	public:
		B() { b = 'x'; }
		void pp()
		{
			cout << b << endl;
		}
};

int main()
{
	A aa;
	B bb;

	aa.pp();
	bb.pp();

	return 0;
}

