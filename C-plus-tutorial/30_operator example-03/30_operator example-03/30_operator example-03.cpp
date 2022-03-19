// 30_operator example-03.cpp : 定義主控台應用程式的進入點。
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

		xxx add(xxx s)
		{
			xxx t;
			t.x = this->x + s.x;	//輸出物件 t 的 x = 這個物件的 x + 傳入物件 s 的 x
			t.y = this->y + s.y;	//輸出物件 t 的 y = 這個物件的 y + 傳入物件 s 的 y
			return t;
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c, d;

	c = a.add(b);	// 物件 c = a add b
	d = c.add(c);	// 物件 d = c add c

	cout << d.x << endl;
	cout << d.y << endl;


	return 0;
}
