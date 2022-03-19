// 24_nested try catch.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

int main()
{
	try
	{
		try
		{
			cout << "A" << endl; throw 3.2;
			cout << "AA" << endl;
		}
		catch (...)	//	內野接到	C會執行 
		{			//	catch (int) 內野接不到外野接 C不會執行 若外野也接不到會發生嚴重錯誤X
			cout << "B" << endl;
		}
		cout << "C" << endl;
	}
	catch (...)
	{

	}

	return 0;
}

