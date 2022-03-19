// 05_data structure with the stack.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "stdlib.h"

class stack
{
	// 為了讓使用者只能讀 size, top 且只能在類別設計中使用(不可在此以外修改), 所以要設定為 private 私有財 
	private:
		int size;
		int top;

	public:
		char *a;
		stack(int size)
		{
			this->size = size;
			top = 0;
			a = (char*)malloc(sizeof(char)*size); //	a = new char[size];
		}
		~stack()
		{
			free(a); //	delete []a;
		}

		bool push(char c)
		{
			if (top >= size) return false;	//	當目前堆疊數>最高堆疊數回傳 false
			a[top++] = c;					//	a[n+1] = '字元'
			return true;					// 否則回傳 true
		}
		char pop()
		{
			if (top == 0) return 0;	//	當目前堆疊數是空的回傳0
			return a[--top];		//	否則回傳 a[n-1] 先減在傳(傳減掉後)
		}

		// 為了讓使用者能讀 size, top (權限為 private), 所以設計使用者能呼叫的副程式
		int Size() { return size; } //	read only
		int Top() { return top; }	//	read only

};

int main()
{
	stack x(10);
	//	初始值
	printf("初始值\n");
	printf("%d\n", x.Size());
	printf("%d\n", x.Top());
	//	push
	printf("push\n");
	x.push('a');
	printf("%d\n", x.Top());

	x.push('b');
	printf("%d\n", x.Top());
	//	pop
	printf("pop\n");
	x.pop();
	printf("%d\n", x.Top());
	printf("%c\n", x.pop());

	return 0;
}

