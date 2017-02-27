



//Listing 2.2. Файл Point.cpp: реализация класса Point 
#include <iostream> 
#include <cmath> 



using namespace std;
#include "Point.h"          //включение делает видимым определение 
                            //класса Point в файле реализации 

//В файле реализации имя каждой функции-члена класса должно быть 
//полностью квалифицировано при помощи бинарного оператора :: 

void Point::SetX(int x) 
{ 
      x_ = x >= 0 ? x : 0; 
} 

void Point::SetY(int y) 
{ 
      y_ = y >= 0 ? y : 0; 
} 

void Point::Print() 
{ 
      cout << '(' << x_ << ',' << y_ << ')'; 
} 

bool Point::Read(const char *txt) 
{ 
      if(txt) cout << txt; 
      int x, y; 
      char c; 
      if( cin >> c && c == '(' && 
           cin >> x && 
           cin >> c && c == ',' && 
           cin >> y && 
           cin >> c && c == ')' 
        ) 


      { 
           SetX(x); SetY(y); 
           return true; 
      } 
      if(!cin) cin.clear(); 
     while(cin.get() != '\n'); 
      return false; 
} 

//вот как «на самом деле» выглядит метод Move (и другие методы тоже!) 
void Point::Move(int dx, int dy) 
{ 
      this->SetX(this->x_ + dx);            //методы класса могут использовать 
      this->SetY(this->y_ + dy);            //другие методы своего класса 
} 

double Point::Dist(const Point &other) 
{ 
      return sqrt( pow(static_cast<double>(x_-other.x_),2) 
                   + pow(static_cast<double>(y_-other.y_),2) 
                   ); 
} 

//** 3 ** 
//реализацию friend-функции целесообразно размещать в файле 
//реализации класса, потому что она тесно связана с классом; 
//она НЕ использует GetX() и GetY() так как имеет непосредственный 
//доступ к компонентам x_ и y_ 

double fdist(const Point &a, const Point &b) 
{ 
      return sqrt( pow(static_cast<double>(a.x_-b.x_),2) 
                   + pow(static_cast<double>(a.y_-b.y_),2) 
                   ); 
} 

