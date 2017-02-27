



//Listing 2.2. ���� Point.cpp: ���������� ������ Point 
#include <iostream> 
#include <cmath> 



using namespace std;
#include "Point.h"          //��������� ������ ������� ����������� 
                            //������ Point � ����� ���������� 

//� ����� ���������� ��� ������ �������-����� ������ ������ ���� 
//��������� ��������������� ��� ������ ��������� ��������� :: 

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

//��� ��� ��� ����� ���� �������� ����� Move (� ������ ������ ����!) 
void Point::Move(int dx, int dy) 
{ 
      this->SetX(this->x_ + dx);            //������ ������ ����� ������������ 
      this->SetY(this->y_ + dy);            //������ ������ ������ ������ 
} 

double Point::Dist(const Point &other) 
{ 
      return sqrt( pow(static_cast<double>(x_-other.x_),2) 
                   + pow(static_cast<double>(y_-other.y_),2) 
                   ); 
} 

//** 3 ** 
//���������� friend-������� ������������� ��������� � ����� 
//���������� ������, ������ ��� ��� ����� ������� � �������; 
//��� �� ���������� GetX() � GetY() ��� ��� ����� ���������������� 
//������ � ����������� x_ � y_ 

double fdist(const Point &a, const Point &b) 
{ 
      return sqrt( pow(static_cast<double>(a.x_-b.x_),2) 
                   + pow(static_cast<double>(a.y_-b.y_),2) 
                   ); 
} 

