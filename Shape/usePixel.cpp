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

int main()
{
	Pixel a(10, 20, Pixel::red);
	cout << "Pixel a: ";
	a;
	cout << endl;

	Pixel b(Point(30, 40), Pixel::blue);
	cout << "Pixel b: ";
	b;
	cout << endl;


	cout << "Dist = " << a.Dist(b) << endl;
	cout << "Color of Pixel b = " << b.GetColor() << endl;

	Pixel c = a;
	cout << "Pixel c: ";
	c;
	cout << endl;

	c = b;
	cout << "Pixel c: ";
	c;
	cout << endl;


	Point* p;
	Pixel* q = &a;
	p = q; // 
	p = &c; // 

	q = static_cast<Pixel *>(p);

	Point pt(11, 22);

	Point* pp = new Pixel(111, 222, Pixel::green);
	test(pp);
	delete pp;

	Point* arr[] = {&pt, &a, &b, &c};
	const int n = sizeof arr / sizeof *arr;

	for (int i = 0; i < n; ++i)
	{
		arr[i]->Print();
		cout << endl;
	}
	for (int i = 0; i < n; ++i)
	{
		arr[i]->Move(10, 20);
	}
	for (int i = 0; i < n; ++i)
	{
		arr[i]->Print();
		cout << endl;
	}

	cout << endl << "point pt: " << pt << endl;
	cout << endl << "pixel a: " << a << endl;
	//system("pause");
}
