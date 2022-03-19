// 028_operator example-01.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;

class xxx
{
	private:
		int x;
		int y;

	public:
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

		xxx *add()	//	回傳 xxx 物件資料型態, 因為 this 是指標 所以 add 要加上 * 號
		{
			return this;
		}
};

int main()
{
	xxx a(1, 2), b(3, 4);
	xxx c;


	return 0;
}

