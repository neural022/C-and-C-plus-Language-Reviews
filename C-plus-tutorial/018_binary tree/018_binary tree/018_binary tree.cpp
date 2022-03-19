// 018_binary tree.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"

template <class xxx>
class node
{
	private:
		xxx data;
		node *L;
		node *R;
	public:
		node()
		{
			data = NULL;
			L = NULL;
			R = NULL;
		}

		node(xxx data)
		{
			this->data = data;
			L = NULL;
			R = NULL;
		}

		~node()
		{
			//	if (L) delete L;
			//	if (R) delete R;        
		}

		void setLL(node *L) { this->L = L; }
		void setRR(node *R) { this->R = R; }
		void LL() { return L; }
		void RR() { return R; }
		xxx Data() { return data; }
};

int main()
{
	node <int> a('A'), b('B'), c('C'), d('D'), e('E'), g('G'), h('H');
	a.setLL(&c);
	a.setRR(&d);
	c.setLL(&e);
	c.setRR(&b);
	d.setLL(&g);
	d.setRR(&h);

	return 0;
}

