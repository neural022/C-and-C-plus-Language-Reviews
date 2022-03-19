// 23_try catch example-02.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		cout << "A" << endl;
		throw 3.2;	//	沒講為 double 資料型別
	}
	catch (float)
	{
		cout << "BB" << endl;
	}
	catch (double)
	{
		cout << "BBB" << endl;
	}
	cout << "C" << endl;

	return 0;
}


