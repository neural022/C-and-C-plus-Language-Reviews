// 35_queue.cpp : 定義主控台應用程式的進入點。
//

#include "stdafx.h"
#define SIZE 5

int queue[SIZE];
int front = 0;
int rear = SIZE - 1;

int count()
{
	if (rear >= front) return (rear - front + 1) % SIZE;
	else return (rear - front + 1 + SIZE) % SIZE;
}

void inQ(int data)
{
	if (count() < SIZE - 1)
	{
		rear = ++rear % SIZE;
		printf("rear = %d\n", rear);
		queue[rear] = data;
		//	printf("queue[%d] = %d\n", rear, queue[rear]);
	}
}

int deQ()
{
	int data;
	if (count() == 0) return 0;
	else
	{
		data = queue[front];
		front = ++front % SIZE;
		return data;
	}
}

int main()
{
	int data;
	printf("count = %d\n", count());
	inQ(10);
	inQ(20);
	inQ(30);
	inQ(40);
	inQ(50);
	printf("count = %d\n", count());
	data = deQ();
	data = deQ();
	data = deQ();
	printf("data = %d\n", data);
	printf("count = %d\n", count());

	return 0;
}

