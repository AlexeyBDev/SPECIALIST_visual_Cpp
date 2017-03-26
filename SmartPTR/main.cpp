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
		Test *q = p; // ���������� �����
		q->Say();
		// delete q;
		Test *r = 0;
		r = p; // ������������ �����
		r->Say();
		delete p; // ����������� ����
	}
	{
		SmartPTR<Test> p(new Test("SmartPTR"));
		p->Say();
		(*p).Say();
		//SmartPTR<Test> q = p; // ���������� ������
		//q->Say();
		// delete q;
		//SmartPTR<Test> r = 0;
		//r = p; // ������������ ������
		//r->Say();
		//delete p; // ����������� �� ����

		// ��� ���� ����� ���������� ������������ (�� ���� ������������ ��� ������� �� ���������)
		// ����� ��� ������ ������ � ��������!
		SmartPTR<int> pi(new int);
		int *y = new int;
		*y = 10;
		cout << *y << endl;
		delete y;
		*pi = 14;
	}
	return 0;
}


