#include <iostream>
#include "Point.h"
#include "Pixel.h"
using namespace std;

void test(Point* p)
{
	cout << "test(Point *p): ";
	p->Print();
	p->Move(1, 1);
	p->Print();
	cout << endl;
}

void Btest(Point p)
{
	cout << "test(Point p): ";
	p.Print();
	p.Move(1, 1);
	p.Print();
	cout << endl;
}

void testR(Point &p)
{
	cout << "test(Point &p): ";
	p.Print();
	p.Move(1, 1);
	p.Print();
	cout << endl;
}

int main()
{
	Pixel a(10, 20, Pixel::red);
	cout << "Pixel a: ";
	a.Print();
	cout << endl;

	Pixel b(Point(30, 40), Pixel::blue);
	cout << "Pixel b: ";
	b.Print();
	cout << endl;

	b.SetColor(Pixel::green);
	b.Move(10, 20);
	cout << "Pixel b: ";
	b.Print();
	cout << endl;

	cout << "Dist = " << a.Dist(b) << endl;
	cout << "Color of Pixel b = " << b.GetColor() << endl;

	Pixel c = a;
	cout << "Pixel c: ";
	c.Print();
	cout << endl;

	c = b;
	cout << "Pixel c: ";
	c.Print();
	cout << endl;

	cout << "Point c: ";
	c.Point::Print();
	cout << endl;
	system("pause");
	//===============================================

	Point* p;
	Pixel* q = &a;
	p = q; // Восходящее приведение
	p = &c; // Восходящее приведение
	cout << "Pixel c: ";
	c.Print();
	cout << endl;

	q = static_cast<Pixel *>(p);
	cout << "Pixel q: ";
	q->Print();
	cout << endl;
	Point pt(11, 22);
	test(&pt);
	test(&a);
	cout << "------------------" << endl;
	Btest(pt);
	Btest(a);
	cout << "------------------" << endl;
	testR(pt);
	testR(a);

	system("pause");

	Pixel a1(1, 2, Pixel::red);
	cout << "Pixel a1: ";
	a1.Print();
	cout << endl;
	Point p1;
	p1.Print();
	p1 = a1;
	p1.Print();
	a1 = p1;
	cout << "Pixel a1: ";
	a1.Print();
	cout << endl;
	q = static_cast<Pixel *>(&p1);
	cout << "Pixel q: ";
	q->Print();
	cout << endl;
	//system("pause");
	cout << "-----------" << endl;
	Point *Arr[] = {&pt, &a, &b, &c};
	const int n = sizeof Arr / sizeof Arr[0];
	for(int i = 0; i < n; ++i)
	{
		Arr[i]->Print();
		cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		Arr[i]->Move(10, 20);
		//cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		Arr[i]->Print();
		cout << endl;
	}

	Point *ppp = new Pixel(111, 222, Pixel::Color::red);
	test(ppp);
	Btest(*ppp);
	testR(*ppp);
	delete ppp;
}
