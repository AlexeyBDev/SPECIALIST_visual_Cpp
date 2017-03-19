// WorkingStudent.h: interface for the WorkingStudent class.
//
/////////////////////////////////////////////////
#ifndef WORKINGSTUDENT_H
#define WORKINGSTUDENT_H

#include "Student.h"
#include "Worker.h"


class WorkingStudent :
    public Student,
    public Worker
{
public:
    virtual void Print(ostream&) const;
    WorkingStudent(const char *, int, const char *);
    virtual ~WorkingStudent();
};

#endif // WORKINGSTUDENT_H
