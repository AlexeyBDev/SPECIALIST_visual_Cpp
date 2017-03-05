// Класс треугольника реализуемый посредством трех точек
#ifndef TRIANGLE_H_BUB
#define TRIANGLE_H_BUB
#include "Line/point.h"

class Triangle
{
private:
	Point a_, b_, c_;
public:
	void GetTriangle();
	/**
	 * установка значений вершит треугольника 
	 */
	void SetTriangle(Point, Point, Point);
	/**
	 * выводит в консоль значения вершин треугольника
	 */
	void PrintTriangle();
};

#endif
