#include <iostream>

#include "myPixel.h"

using namespace std;
void Test(Point *p)
{
	p->Print();
	p->Move(10, 15);
	p->Print();
}

int main()
{
	myPixel a(10, 20, myPixel::red);
	a.Print();
	cout << endl;
	myPixel b(Point(40, 40), myPixel::black);
	b.Print();
	cout << endl;

	cout << a.Dist(b) << endl;

	myPixel c;
	c.Print();
	cout << endl;

	c.Move(100, 100);
	c.Print();
	cout << endl;

	c.Point::Print();
	cout << endl;
	
	Point *pt;
	myPixel *px = &a;

	pt = px;
	pt = &a;

	cout << "Point ";
	pt->Print();
	cout << endl;

	px = static_cast<myPixel*>(pt);
	cout << "myPixel = ";
	px->Print();
	cout << endl;

	Point po(15, 25);
	cout << "Point ";
	po.Print();
	cout << endl;

	px = static_cast<myPixel *>(&po);
	cout << "myPixel = ";
	px->Print();
	cout << endl;

	Test(&a);
	Test(&po);

	return 0;
}