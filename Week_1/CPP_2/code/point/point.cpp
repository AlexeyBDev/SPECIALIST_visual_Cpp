
//Listing 2.2. Файл Point.cpp: реализация класса Point 
#include <iostream>
#include <iomanip>
#include "Point.h"          //включение делает видимым определение 

//класса Point в файле реализации 

//В файле реализации имя каждой функции-члена класса должно быть 
//полностью квалифицировано при помощи бинарного оператора :: 

void Point::SetX(float x) 
{ 
      x_ = x >= 0 ? x : 0; 
} 

void Point::SetY(float y) 
{ 
      y_ = y >= 0 ? y : 0; 
}

void Point::PrintPoint(int precision)
{
	std::cout << "(" <<	std::setprecision(precision) << 
		std::setiosflags(std::ios::showpoint | std::ios::fixed) <<
		x_ <<", " << y_ << ")" << std::endl;
} 



