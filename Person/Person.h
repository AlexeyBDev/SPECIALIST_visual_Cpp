// Person.h: interface for the Person class.
//
/////////////////////////////////////////////

#ifndef PERSON_H
#define PERSON_H

#include <iostream>
using namespace std;

class Person
{
    const char *name;
public:
    virtual void Print(ostream&) const;
    Person(const char * ="Unknown");
    virtual ~Person();
};

#endif // PERSON_H
