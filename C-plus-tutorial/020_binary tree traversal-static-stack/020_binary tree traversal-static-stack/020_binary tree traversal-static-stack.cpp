// 020_binary tree traversal-static-stack.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#include "iostream"
//#include "stack.h"
#define TreeMax 7
using namespace std;

//	tree
template <class xxx>
class node
{
	private:
		xxx data;
		node *L;
		node *R;
		int size;
		int top;
	public:
		static int count; //	類別中全域變數
		xxx *a;
		node()
		{
			data = NULL;
			L = NULL;
			R = NULL;
			top = 0;
		}

		node(xxx data)
		{
			this->data = data;
			L = NULL;
			R = NULL;
			this->size = TreeMax;
			top = 0;
			a = new xxx[size];
		}

		~node()
		{
			delete[] a;
			//	if (L) delete L;
			//	if (R) delete R;
		}
		//---------------------------------------------
		void setL(node *L) { this->L = L; }
		void setR(node *R) { this->R = R; }
		void LL() { return L; }
		void RR() { return R; }
		int Size() { return size; }
		int Top() { return top; }
		xxx Data() { return data; }

		bool push(xxx c)
		{
			if (top >= size) return false;
			a[top++] = c;
			return true;
		}

		xxx pop()
		{
			if (top == 0) return 0;
			return a[--top];
		}

		void danceR()
		{
			count++;
			push(this->data);
			//	cout << pop();
			if (L) L->danceL();
			cout << pop();
		}
		void danceL()
		{
			count++;
			push(this->data);
			//	cout << pop();
			if (R) R->danceR();
			cout << pop();
		}
};

template <class xxx>
int node <xxx>::count = 0;

int main()
{
	node <char> a('A'), b('B'), c('C'), d('D'), e('E'), g('G'), h('H');

	a.setL(&b);
	a.setR(&d);
	b.setL(&g);
	b.setR(&c);
	d.setL(&e);
	d.setR(&h);

	a.danceR();





	return 0;
}

