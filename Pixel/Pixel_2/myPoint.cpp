//Реализация класса Point
#include <iostream>
#include <cmath>
#include "Point.h"
using namespace std;

Point::Point(int x, int y)
{
    SetX(x); SetY(y);
}


void Point::SetX(int _x)
{
    x= _x>=0 ? _x : 0;
}
void Point::SetY(int _y)
{
    y= _y>=0 ? _y : 0;
}

void Point::Print()
{
    cout <<'('<<x<<", "<<y<<')';

}

void Point::Move(int dx, int dy)
{
    SetX (x + dx);
    SetY (y + dy);
}

double Point::Dist(const Point &b)
{
    return sqrt( pow (static_cast<double>(x-b.x), 2)
                +pow (static_cast<double>(y-b.y), 2)
                );
}

double fDist(const Point &a, const Point &b)
{
    return sqrt( pow (static_cast<double>(a.x-b.x), 2)
                +pow (static_cast<double>(a.y-b.y), 2)
                );
}
