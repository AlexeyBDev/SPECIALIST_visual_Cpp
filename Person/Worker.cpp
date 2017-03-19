// Worker.cpp: implementation of the Worker class.
//
///////////////////////////////////////////////////////

//#include "stdafx.h" //file for mustdie
#include "Worker.h"

////////////////////////////////////////////////////////
// Construction/Destruction
////////////////////////////////////////////////////////

Worker::Worker(const char *_name, const char *dept):
    Person(_name), department(dept)
{}

Worker::~Worker()
{}

void Worker::Print(ostream& os) const
{
    Person::Print(os);
    os << " - worker of " << department << " department";
}
