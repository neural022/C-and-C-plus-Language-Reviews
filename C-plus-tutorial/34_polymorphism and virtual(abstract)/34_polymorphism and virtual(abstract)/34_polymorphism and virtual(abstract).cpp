// 34_polymorphism and virtual(abstract).cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	//  c++: polymorphism (多型)
	//	公司設計軟體為了讓所有要使用 xxx 類別 規範了一個規則
	//	所有成員都需遵循此規則 pp()
	public:
		void virtual pp() = 0;		//	抽象類別： void pp() = 0;	強制規範成員需遵循 rule 為了讓電腦能辨識所以加上 virtual 
};									//	若有成員不遵循 rule 不能建置執行

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


