// Worker.h: interface for the Worker class.
//
/////////////////////////////////////////////////
#ifndef WORKER_H
#define WORKER_H

#include "Person.h"

class Worker : virtual public Person
{
    const char *department;
public:
    virtual void Print(ostream&) const;
    Worker(const char *, const char *);
    virtual ~Worker();
};
#endif // WORKER_H
