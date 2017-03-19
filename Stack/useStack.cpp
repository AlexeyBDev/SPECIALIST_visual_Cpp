#include <iostream>
#include <cstdlib>
#include "Stack.h"

using namespace std;

int main()
{
	Stack<int, 10> intSt10;
	for(int i = 0; !intSt10.isFull(); ++i)
	{
		intSt10.Push(i);
	}
	intSt10.Push(11); // контроль

	while (!intSt10.isEmpty())
	{
		cout << intSt10.Pop() << "  ";
	}
	cout << endl;
	intSt10.Pop();

	Stack<char, 26> charStack;
	for (int i = 'a'; !charStack.isFull(); ++i)
	{
		charStack.Push(i);
	}
	while (!charStack.isEmpty())
	{
		cout << charStack.Pop() << "  ";
	}
	cout << endl;
	charStack.Pop();

	return 0;
}
