//Listing 3.6. ���� useString.cpp � ������ ������ String 

#include <iostream>
#include <fstream>
#include "String.h"

using namespace std;

#define MYDEBUG 

#ifdef    MYDEBUG 
#define DUMP(a)       cout << "String  " #a " = \""; (a).Print(); cout << "\", Length = " << (a).Length() << endl

#else
#define DUMP(a) 
#endif

int main()
{
	String a; //����������� ��������� 
	DUMP(a);

	String b = "Hello"; //����������� �������������� 
	DUMP(b);

	String* p = new String("Good bye");
	DUMP(*p);

	delete p;

	String c = b; //����������� ����� 
	DUMP(c);

	a = b; //������������:        a.operator=(b) 
	DUMP(a);

	a = a; // ���������������� 
	DUMP(a);

	b = a = "Wellcome!"; //������ ���������� ������������ 
	DUMP(a);
	DUMP(b);

	b += a;
	DUMP(a);
	DUMP(b);
	b = c + " world!" + a;
	DUMP(b);
	
	if (b == c) cout << "b == c" << endl;
	else { cout << "b != c" << endl; }
	cout << (a > b ? "a > b" : "a < b") << endl;
	b = c;
	if (b == c) cout << "b == c" << endl;
	else { cout << "b != c" << endl; }
	cout << (a > b ? "a > b" : "a < b") << endl;
	DUMP(c);
	c[3] = 'R';
	DUMP(c);
	cout << c[5] << endl;
	const String t = "Rty";
	cout << t[3] << endl;

	cout << c << endl;
	cin >> c;
	cout << "Hello " << c << endl;

	//system("pause");
	// ������ � �������
	ofstream out;
	out.open("test_out.txt");
	if(out.good())
	{
		out << a << b << c << endl;
		out.close();
		ifstream in;
		in.open("test_out.txt");
		if(in.good())
		{
			in >> b;
			cout << "From file test_out.txt : " << b << endl;
			in.close();
		}
	}

} 

 
