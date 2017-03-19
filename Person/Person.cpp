// Person.cpp : implementation of Person class.
//
////////////////////////////////////////////////

//#include "stdafx.h" //file for mustdie
#include "Person.h"

///////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////

Person::Person(const char *_name):
    name(_name)
{}

Person::~Person()
{}

void Person::Print(ostream& os) const
{
    os << name;
}
