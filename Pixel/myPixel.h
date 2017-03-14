#ifndef MY_PIXEL_H
#define MY_PIXEL_H

#include "myPoint.h"

class myPixel :
	public Point
{
public:               //спецификатор открытой части - интерфейса класса 
	enum Color { black, blue, green, red = 4, yellow = 14, white = 16 };

	const Color &GetColor() const;
	void SetColor(const Color &);
	//static int GetK() { return k; };

	//Pixel();									// по умолчанию
	myPixel(int = 0, int = 0, const Color & = black);
	myPixel(const Point &, const Color & = black);
	myPixel(const myPixel &);						// консутруктор копировани€
	~myPixel();

	void Print() const;
	//(имеет один аргумент!) 

	//** 3 ** внешн€€ функци€, объ€вленна€ дружественной к классу 

//	friend double fdist(const Point &, const Point &);//рассто€ние 
//private:              //спецификатор закрытой части (секции) класса 

	//Point p;     //члены-данные (свойства) класса (подчеркивание в 
	Color c;
	//static int k; // переменные static относ€тс€ ко всему классу
};

#endif
