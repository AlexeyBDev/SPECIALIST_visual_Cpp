// Student.h: interface for the Student class.
//
/////////////////////////////////////////////////
#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : virtual public Person
{
    int year;
public:
    virtual void Print(ostream&) const;
    Student(const char *, int);
    virtual ~Student();
};

#endif // STUDENT_H
