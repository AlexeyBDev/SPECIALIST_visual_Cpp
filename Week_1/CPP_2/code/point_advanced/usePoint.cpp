//Listing 2.3. ���� usePoint.cpp: ���������� ���, ������������ Point 

#include <iostream> 
#include <cmath> 

#include "Point.h" 

using namespace std; 

//���������� ������� ��� ��������� ���������� ����� ������� 

double gdist(Point &a, Point &b)                   //�������� �� ������ 
{                      //���������� Get...() ��� ������� � x_ � y_ 
      return sqrt(pow(static_cast<double>(a.GetX()-b.GetX()),2) 
                   +pow(static_cast<double>(a.GetY()-b.GetY()),2)); 
} 

int main() 
{ 

//** 1 **������������� ������������ ���������� 

      Point a;                    //�������� ���������� ������ Point � ����� 

//    a.x_ = 6;                   //ERROR, �.�. x_ �������� private 
//    a.y_ = 8;                   //ERROR, �.�. y_ �������� private 

      a.SetX(6); 
      a.SetY(8); 
      cout << a.GetX() << ',' << a.GetY() << endl; 

      Point *p = new Point;  //�������� ���������� ������ Point � ���� 
      p->SetX(9); 
      p->SetY(12); 
      cout << p->GetX() << ',' << p->GetY() << endl; 

      cout << "Distance = " 
           << gdist(a,*p)         //������������, �.�. ��������� Point 
           << endl; 
//** 2 ** ������������� ������������ ���������� 

      a.Move(-10,4); 
      p->Read("Enter Point in the form(x,y) "); 

      cout << "Distance from ";        a.Print(); 
      cout << " to ";                  p->Print(); 
      cout << " is " << p->Dist(a) << endl;                  //��� a.Dist(*p) 



//** 3 ** ����� friend-������� 

       cout << "Distance = " << fdist(a,*p) << endl; 

      delete p;
      	system("pause");
                         //�������� �� ���� (������ ��������!) 
} 

