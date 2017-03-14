#include <iostream>
#include "Pixel.h"

using namespace std;
int Pixel::k = 0;

const Pixel::Color &Pixel::GetColor()
{
	return c;
}

void Pixel::SetColor(const Pixel::Color &clr)
{
	c = clr;
}

Pixel::Pixel(int x, int y, const Color & clr) : p(x, y), c(clr)
{
	k++;
}

Pixel::Pixel(const Point &pt, const Color &clr) : p(pt), c(clr)
{
	k++;
}

//Pixel::Pixel() //: p(0, 0), c(black)								// по умолчанию
//{
//	p = { 0, 0 };
//	c = black;
//	k++;
//}

Pixel::Pixel(const Pixel &pt) : p(pt.p), c(pt.c)
{
	k++;
}

Pixel::~Pixel()
{
	k--;
}

void Pixel::Print()
{
	p.Print();
	cout << "\b, ";
	cout << c << ")";
}
//bool Read(const char * = 0);
void Pixel::Move(int dx, int dy)
{
	p.Move(dx, dy);
}

double Pixel::Dist(const Pixel &pt)
{
	return p.Dist(pt.p);
}