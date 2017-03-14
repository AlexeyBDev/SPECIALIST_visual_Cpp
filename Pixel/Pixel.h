//Listing 2.1. ‘айл Pixel.h: определение класса Point 
#ifndef MY_PIXEL_H
#define MY_PIXEL_H

#include "myPoint.h"


class Pixel           
{  
public:               //спецификатор открытой части - интерфейса класса 
	enum Color{black, blue, green, red = 4, yellow = 14, white = 16};

	const Color &GetColor();
	void SetColor(const Color &);
	static int GetK() { return k; };

	//Pixel();									// по умолчанию
	Pixel(int = 0, int = 0, const Color & = black);
	Pixel(const Point &, const Color & = black);
	Pixel(const Pixel &);						// консутруктор копировани€
	~Pixel();

	void Print();                              									
	bool Read(const char * = 0);               								
	void Move(int delta_x, int delta_y);
	double Dist(const Pixel &);
												//(имеет один аргумент!) 

												//** 3 ** внешн€€ функци€, объ€вленна€ дружественной к классу 

	friend double fdist(const Point &, const Point &);//рассто€ние 
private:              //спецификатор закрытой части (секции) класса 

	Point p;     //члены-данные (свойства) класса (подчеркивание в 
	Color c;
	static int k; // переменные static относ€тс€ ко всему классу

};



#endif 


