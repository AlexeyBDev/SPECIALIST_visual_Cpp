#include <iostream>
#include "Line/point.h"
#include "Triangle.h"


using namespace std;

void Triangle::SetTriangle(Point a, Point b, Point c)
{
	a_ = a;
	b_ = b;
	c_ = c;
}

void Triangle::PrintTriangle()
{
	a_.Print();
	b_.Print();
	c_.Print();
	cout << endl;
}
