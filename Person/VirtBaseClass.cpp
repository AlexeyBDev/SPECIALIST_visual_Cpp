// VirtBaseClass.cpp : Defines the entry point for the co
//

#include <iostream>
//#include "stdafx.h"
#include "Person.h"
#include "Student.h"
#include "Worker.h"
#include "WorkingStudent.h"

void WhoAreYou(const Person& p)
{
	p.Print(cout);
	cout << endl;
}

int main()
{
	Person a("Ivanov Ivan");
	WhoAreYou(a);

	Student b("Petrov Peter", 2);
	WhoAreYou(b);

	Worker c("Sidorov Sidor", "Biblio");
	WhoAreYou(c);

	WorkingStudent d("Kuzmin Kuzma", 3, "Biblio");
	WhoAreYou(d);
	//system("pause");
}
