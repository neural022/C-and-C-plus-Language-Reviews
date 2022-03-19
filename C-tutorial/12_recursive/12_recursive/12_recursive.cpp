// 12_recursive.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
using namespace std;


int GCD(int a, int b)
{
	if (a%b == 0) return b;
	return GCD(b, a%b);
}

int Fibonacci(int n)
{
	if (n == 0) return 0;
	else if (n == 1) return 1;
	else return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main()
{
	//	Recursive
	int a, b;
	cout << "Please input number for gcd(a, b):" << endl;
	cin >> a >> b;
	cout << GCD(a, b) << endl;
	int c;
	cout << "Please input Fibonacci number:" << endl;
	cin >> c;
	cout << Fibonacci(c) << endl;
    return 0;
}

