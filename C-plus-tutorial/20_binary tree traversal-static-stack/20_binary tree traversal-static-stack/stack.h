#pragma once
template <class xxx>
class stack
{
	private:
		int size;
		int top;

	public:
		static int count; //	類別中全域變數
		xxx *a;
		stack(int size)
		{
			count++;
			this->size = size;
			top = 0;
			a = new xxx[size];
		}

		~stack()
		{
			count--;
			delete[] a;
		}

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

		int Size() { return size; }
		int Top() { return top; }
};

template <class xxx>
int stack <xxx>::count = 0;
