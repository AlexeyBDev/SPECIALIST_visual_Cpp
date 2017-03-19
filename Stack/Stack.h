#ifndef STACK_H
#define STACK_H

#include <iostream>

// реализация шаблонного класса в хедере
template<typename T, int size_>

class Stack
{
private:
	T stk[size_];
	int top;
public:
	Stack();
	~Stack();

	void Push(const T &);
	T Pop();

	bool isEmpty();
	bool isFull();
};

template <typename T, int size_>
Stack<T, size_>::Stack()
{
	top = 0;
}

template <typename T, int size_>
Stack<T, size_>::~Stack()
{
}

template <typename T, int size_>
void Stack<T, size_>::Push(const T&x)
{
	if(!isFull()) stk[top++] = x;
	else { std::cerr << "\n Stack if FULL \n"; }
}

template <typename T, int size_>
T Stack<T, size_>::Pop()
{
	if(!isEmpty()) return stk[--top];
	else
	{
		std::cerr << "\n Stack is Empty \n";
		return T();
	}

}

template <typename T, int size_>
bool Stack<T, size_>::isEmpty()
{
	return !top;
}

template <typename T, int size_>
bool Stack<T, size_>::isFull()
{
	return top == size_;
}

#endif 
