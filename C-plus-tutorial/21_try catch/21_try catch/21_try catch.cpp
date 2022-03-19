// 21_try catch.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		cout << "A" << endl;
		//throw 123;
	}
	catch (...)	//	... 甚麼球都能接 但一般不會使用它
	{
		cout << "B" << endl;
	}
	cout << "C" << endl;

	return 0;
}
