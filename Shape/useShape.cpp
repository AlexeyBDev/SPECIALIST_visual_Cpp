#include <iostream>

#include "Shape.h"
#include "Point.h"
#include "Pixel.h"

using namespace std;

void PrintAll(Shape **pp, int n)
{
	while (n-- > 0)
	{
		(*pp++)->Print();
	}
	cout << endl;
}
void MoveAll(Shape **pp, int n, int x, int y)
{
	while (n-- > 0)
	{
		(*pp++)->Move(x, y);
	}
}

int main()
{
	Shape *Arr[] = {new Point(10, 20), new Pixel(50, 70, Pixel::red)};
	const int n = sizeof Arr / sizeof Arr[0];
	PrintAll(Arr, n);
	MoveAll(Arr, n, 100, 200);
	PrintAll(Arr, n);
	for(int i = 0; i < n; ++i)
	{
		delete Arr[i];
	}

	Shape *a;
	Point b(100, 323);
	Pixel c(500, 300, Pixel::yellow);
	a = &b;
	a->Print();
	cout << endl;
	a = &c;
	a->Print();
	cout << endl;

	return 0;
}