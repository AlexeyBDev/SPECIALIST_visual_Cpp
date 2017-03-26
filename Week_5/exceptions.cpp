// обработка exception
#include <iostream>
//#include "SmartPtr.h"
using namespace std;

class Test
{
	const char* p;
public:
	Test(const char* _p): p(_p)
	{
		cout << "Object " << p << " created\n";
	}

	~Test()
	{
		cout << "Object " << p << " destroyed\n";
	}
};

class MyError
{
public:
	int errCode;
	const char* errMessage;

	MyError(int code, const char* message):
		errCode(code), errMessage(message)
	{
	}
};

void f2()
{
	int a = 1, b = 0, c;
	cout << "Start of F2()\n";
	Test e = "E";

	//int i = 6;
	if (b == 0) throw MyError(0,"Division by zero");

	c = a / b;
	Test f = "F";
	cout << "End of F2()\n";
}

void f1()
{
	cout << "Start of F1()\n";
	Test c = "C";

	try
	{
		cout << "Start of try-block in F1()\n";
		Test d = "D";
		f2();
		Test g = "G";
		cout << "End of try-block in F1()\n";
	}
	catch (int e)
	{
		cout << "Exception in F1() " << e << endl;
		throw;
	}

	Test h = "H";
	cout << "End of F1()\n";
}

int main()
{
	cout << "Start of main()\n";
	Test a = "A";

	try
	{
		cout << "Start of try-block\n";
		Test b = "B";
		f1();
		Test i = "I";
		cout << "End of try-block\n";
	}
	catch (int e)
	{
		cout << "Exception in main() " << e << endl;
	}
	catch (MyError e)
	{
		cout << "Exception in main()\n"
			<< e.errMessage << endl
			<< "Code = " << e.errCode << endl;
	}
	catch (...)
	{
		cout << "Unknown Exception " << endl;
	}

	cout << "End of main()\n";
	//system("pause");

	return 0;
}
