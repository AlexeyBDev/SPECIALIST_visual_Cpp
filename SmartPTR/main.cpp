#include <iostream>
#include <cstdlib>
#include "SmartPTR.h"
//#include <>

using namespace std;

class Test
{
private:
	const char *Name;
public:
	Test(const char *n) : Name(n)
	{
		cout << "Created: ";
		Say();
	};
	~Test()
	{
		cout << "Destroyed: ";
		Say();
	};;
	void Say()
	{
		cout << "Object: " << Name << endl;
	};
};

int main(int argc, char* argv[])
{
	{
		Test *p = new Test("A");
		p->Say();
		Test *q = p; // копировать можно
		q->Say();
		// delete q;
		Test *r = 0;
		r = p; // присваивание можно
		r->Say();
		delete p; // освобождать надо
	}
	{
		SmartPTR<Test> p(new Test("SmartPTR"));
		p->Say();
		(*p).Say();
		//SmartPTR<Test> q = p; // копировать нельзя
		//q->Say();
		// delete q;
		//SmartPTR<Test> r = 0;
		//r = p; // присваивание нельзя
		//r->Say();
		//delete p; // освобождать не надо

		// Для того чтобы ограничить пользователя (не дать использовать ему функции по умолчанию)
		// нужно эти методы внести в закрытые!
		SmartPTR<int> pi(new int);
		int *y = new int;
		*y = 10;
		cout << *y << endl;
		delete y;
		*pi = 14;
	}
	return 0;
}


