// определение класса Point
#ifndef POINT_H
#define POINT_H

class Point
{
private:
    int x, y;
public:
    int GetX(){ return x; } // inline по умолчанию
    int GetY();
    void SetX(int);
    void SetY(int);

    void Print() const;
    void Move(int delta_x, int delta_y);
    double Dist(const Point &);

    Point(int =0, int =0);

    friend double fDist(const Point &, const Point &);
};

inline int Point::GetY(){ return y; }

#endif // POINT_H
