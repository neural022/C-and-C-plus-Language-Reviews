// 014_linked list example-02.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

#include "iostream"
using namespace std;

template <class xxx>
class node
{
	private:
		xxx data;
		node *next;

	public:
		node()
		{
			data = NULL;
			next = NULL;
		}
		node(xxx data)
		{
			this->data = data;
			next = NULL;
		}
		~node()
		{
			//demo later
		}

		xxx Data() { return data; }
		node *Next() { return next; }
		void setData(xxx data) { this->data = data; }
		void setNext(node *next) { this->next = next; }
};

int main()
{
	node <int> a(1), b(2), c(3);
	node <int> *p;

	a.setNext(&b);
	b.setNext(&c);
	p = &a;
	while (p)
	{
		cout << p->Data() << endl;
		p = p->Next();
	}

	return 0;
}

