// Student.cpp: implementation of the Student class.
//
///////////////////////////////////////////////////////

//#include "stdafx.h" //file for mustdie
#include "Student.h"

////////////////////////////////////////////////////////
// Construction/Destruction
////////////////////////////////////////////////////////

Student::Student(const char *_name, int _year):
    Person(_name), year(_year)
{}

Student::~Student()
{}

void Student::Print(ostream& os) const
{
    Person::Print(os);
    os << " - student of " << year << " year";
}
