// 06_template.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "stdlib.h"

//	為了讓設計的stack能再重複使用 切記，勿重複複製(stack2..stack3...)
template <class xxx>

class stack
{
	//	為了讓使用者只能讀 size, top 且在類別設計中使用(不可在此以外修改), 所以要設定為 private 私有財 
	private:
		int size;
		int top;

	public:
		xxx *a;
		stack(int size)
		{
			this->size = size;
			top = 0;
			a = (xxx*)malloc(sizeof(xxx)*size); //	a = new char[size];
		}
		~stack()
		{
			free(a); //	delete []a;
		}

		bool push(xxx c)
		{
			if (top >= size) return false;	//	當目前堆疊數>最高堆疊數回傳 false
			a[top++] = c;	//	否則a[n+1] = '字元'
			return true;	// 回傳 true
		}
		xxx pop()
		{
			if (top == 0) return 0;	//	當目前堆疊數是空的回傳0
			return a[--top]; //	否則回傳 a[n-1] 先減在傳(傳減掉後)
		}

		//	為了讓使用者只能讀 size, top (權限為 private), 所以設計使用者能呼叫的副程式
		int Size() { return size; } //	read only
		int Top() { return top; } //	read only

};

int main()
{
	//	template後
	stack <char> x(10);
	stack <int> y(10);
	//	初始值
	printf("%d\n", x.Size());
	printf("%d\n", x.Top());
	//	push & pop
	x.push('a');
	printf("%d\n", x.Top());
	x.push('b');
	printf("%d\n", x.Top());
	x.pop();
	printf("%d\n", x.Top());
	printf("%c\n", x.pop());

	return 0;
}

