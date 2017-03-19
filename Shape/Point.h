// Определение класса Point
#ifndef POINT_H
#define POINT_H

#include "Shape.h"

class Point : public Shape
{
private:
    int x, y;

public:
    virtual void Print(std::ostream & =std::cout)const;
    Point(int =0, int =0); 

    int GetX()const{ return x; } // inline 
    int GetY()const;
    void SetX(int);
    void SetY(int);

    void Move(int delta_x, int delta_y);
    double Dist(const Point &)const;

    virtual ~Point(){}

    friend double fDist(const Point &, const Point &);
    friend std::ostream &operator<<(std::ostream &os, const Point &p)
    {
        p.Print(os);
        return os;
    }
};


inline int Point::GetY()const{ return y; }

#endif // POINT_H
