// 025_namespace.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
//using namespace std;
namespace
{
	int a = 1, b = 2, c = 3;
}

int main()
{
	std::cout << a;//<< endl;

	return 0;
}

