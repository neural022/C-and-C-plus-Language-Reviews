// 19_binary tree traversal order.cpp : 定義主控台應用程式的進入點。
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
		void setL(node *L) { this->L = L; }
		void setR(node *R) { this->R = R; }
		void LL() { return L; }
		void RR() { return R; }
		xxx Data() { return data; }
		void danceA()	//	後序：左右中
		{
			if (L) L->danceA();
			if (R) R->danceA();
			printf("%c", this->data);
		}
		void danceB()	//	前序：中左右
		{
			printf("%c", this->data);
			if (L) L->danceB();
			if (R) R->danceB();
		}
		void danceC()	// 中序：左中右
		{
			if (L) L->danceC();
			printf("%c", this->data);
			if (R) R->danceC();
		}
};

int main()
{
	node <char> a('A'), b('B'), c('C'), d('D'), e('E'), g('G'), h('H');
	a.setL(&c);
	a.setR(&d);
	c.setL(&e);
	c.setR(&b);
	d.setL(&g);
	d.setR(&h);

	a.danceA();
	printf("\n");
	a.danceB();
	printf("\n");
	a.danceC();

	return 0;
}

