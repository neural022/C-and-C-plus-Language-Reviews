#pragma once

template <class xxx>
class stack
{
	private:
		int size; //	物件屬性
		int top;

	public:
		static int count; //	類別中全域變數
		xxx *a;
		stack(int size)
		{
			count++;
			this->size = size;
			top = 0;
			a = new xxx[size]; //	(char *) malloc(sizeof(char)*size);
		}

		~stack()
		{
			count--;
			delete[] a; //	free(a);
		}

		bool push(xxx c)
		{
			if (top >= size) return false;
			a[top++] = c;	//	先取值後運算
			return true;
		}

		xxx pop()
		{
			if (top == 0) return 0;
			return a[--top];	//	先運算後取值
		}

		int Size() { return size; } //	read only
		int Top() { return top; } //	read only
};

template <class xxx>
int stack <xxx>::count = 0;