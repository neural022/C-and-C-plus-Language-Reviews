// 016_linked list example-04.cpp : 定義主控台應用程式的進入點。
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
			if (next) delete next;//demo later
		}

		xxx Data() { return data; }
		node *Next() { return next; }
		void setData(xxx data) { this->data = data; }
		void setNext(node *next) { this->next = next; }
};

int main()
{
	node <int> *p, *head;
	head = new node <int>(1);
	head->setNext(new node <int>(2));
	head->Next()->setNext(new node <int>(3));
	p = head;

	while (p)
	{
		cout << p->Data() << endl;
		p = p->Next();
	}

	delete head;

	return 0;
}

