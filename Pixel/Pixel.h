//Listing 2.1. ���� Pixel.h: ����������� ������ Point 
#ifndef MY_PIXEL_H
#define MY_PIXEL_H

#include "myPoint.h"


class Pixel           
{  
public:               //������������ �������� ����� - ���������� ������ 
	enum Color{black, blue, green, red = 4, yellow = 14, white = 16};

	const Color &GetColor();
	void SetColor(const Color &);
	static int GetK() { return k; };

	//Pixel();									// �� ���������
	Pixel(int = 0, int = 0, const Color & = black);
	Pixel(const Point &, const Color & = black);
	Pixel(const Pixel &);						// ������������ �����������
	~Pixel();

	void Print();                              									
	bool Read(const char * = 0);               								
	void Move(int delta_x, int delta_y);
	double Dist(const Pixel &);
												//(����� ���� ��������!) 

												//** 3 ** ������� �������, ����������� ������������� � ������ 

	friend double fdist(const Point &, const Point &);//���������� 
private:              //������������ �������� ����� (������) ������ 

	Point p;     //�����-������ (��������) ������ (������������� � 
	Color c;
	static int k; // ���������� static ��������� �� ����� ������

};



#endif 


