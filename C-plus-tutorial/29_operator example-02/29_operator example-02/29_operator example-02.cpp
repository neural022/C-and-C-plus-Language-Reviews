// 29_operator example-02.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	public:
		int x;
		int y;

		xxx()
		{
			x = y = 0;
		}

		xxx(int x, int y)
		{
			this->x = x;
			this->y = y;
		}

		~xxx()
		{

		}

		xxx add(xxx s)	//	傳入參數為一個物件 xxx s
		{
			xxx t;
			return t;	// 回傳為一個物件 xxx t
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c;

	c = a.add(b);
	cout << c.x << endl;
	cout << c.y << endl;


	return 0;
}

