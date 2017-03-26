#ifndef SMARTPTR_H
#define SMARTPTR_H

template<class T>

class SmartPTR
{
private:
	T *p;
	SmartPTR(const SmartPTR &);
	SmartPTR &operator =(const SmartPTR &);
public:
	SmartPTR(T *ptr) : p(ptr) {};
	~SmartPTR() { delete p; };
	T *operator ->() { return p; };
	T &operator *() { return *p; };
};

#endif
