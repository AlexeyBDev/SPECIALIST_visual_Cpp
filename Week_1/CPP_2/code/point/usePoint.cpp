//Listing 2.3. ���� usePoint.cpp: ���������� ���, ������������ Point 

//#include <iostream>
//#include <cmath>
//
//#include "Point.h"
//#include <iomanip>
//
//using namespace std;
//
////���������� ������� ��� ��������� ���������� ����� ������� 
//
//double gdist(Point& a, Point& b) //�������� �� ������ 
//{ //���������� Get...() ��� ������� � x_ � y_ 
//	return sqrt(pow(static_cast<double>(a.GetX() - b.GetX()), 2)
//		+ pow(static_cast<double>(a.GetY() - b.GetY()), 2));
//}
//
//int main()
//{
//	//** 1 **������������� ������������ ���������� 
//
//	Point a; //�������� ���������� ������ Point � ����� 
//
//	//    a.x_ = 6;                   //ERROR, �.�. x_ �������� private 
//	//    a.y_ = 8;                   //ERROR, �.�. y_ �������� private 
//
//	a.SetX(6.f);
//	a.SetY(8.f);
//	//cout << a.GetX() << ',' << a.GetY() << endl;
//
//	Point* p = new Point; //�������� ���������� ������ Point � ���� 
//	p->SetX(9);
//	p->SetY(13);
//	//cout << p->GetX() << ',' << p->GetY() << endl;
//	a.PrintPoint(5);
//	p->PrintPoint();
//
//
//	cout << "Distance = " << setprecision(2) << setiosflags(std::ios::showpoint | std::ios::fixed) 
//		<< gdist(a, *p) //������������, �.�. ��������� Point 
//		<< endl;
//
//	delete p;
//	//system("pause");
//	//�������� �� ���� (������ ��������!) 
//} 

