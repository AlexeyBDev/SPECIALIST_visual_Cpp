
#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x, y;
public:
    int GetX()const{ return x; } // inline 
    int GetY()const;
    void SetX(int);
    void SetY(int);

    virtual void Print()const;
    void Move(int delta_x, int delta_y);
    double Dist(const Point &)const;

    Point(int =0, int =0);
	virtual ~Point() {};
    friend double fDist(const Point &, const Point &);
};

inline int Point::GetY()const{ return y; }

#endif // POINT_H
