#include "myPixel.h"


#include <iostream>
//#include "Pixel.h"

using namespace std;
//int Pixel::k = 0;

const myPixel::Color &myPixel::GetColor() const
{
	return c;
}

void myPixel::SetColor(const myPixel::Color &clr)
{
	c = clr;
}

myPixel::myPixel(int x, int y, const Color & clr) : Point(x, y), c(clr)
{
}

myPixel::myPixel(const Point &pt, const Color &clr) : Point(pt), c(clr)
{
}


myPixel::myPixel(const myPixel &pt) : Point(pt), c(pt.c)
{
}

myPixel::~myPixel()
{
}

void myPixel::Print() const
{
	Point::Print();
	cout << "\b, "<< c << ")";
}
//bool Read(const char * = 0);
//void myPixel::Move(int dx, int dy) 
//{
//	p.Move(dx, dy);
//}

//double myPixel::Dist(const myPixel &pt)
//{
//	return p.Dist(pt.p);
//}
