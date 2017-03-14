#ifndef MY_PIXEL_H
#define MY_PIXEL_H

#include "myPoint.h"

class myPixel :
	public Point
{
public:               //������������ �������� ����� - ���������� ������ 
	enum Color { black, blue, green, red = 4, yellow = 14, white = 16 };

	const Color &GetColor() const;
	void SetColor(const Color &);
	//static int GetK() { return k; };

	//Pixel();									// �� ���������
	myPixel(int = 0, int = 0, const Color & = black);
	myPixel(const Point &, const Color & = black);
	myPixel(const myPixel &);						// ������������ �����������
	~myPixel();

	void Print() const;
	//(����� ���� ��������!) 

	//** 3 ** ������� �������, ����������� ������������� � ������ 

//	friend double fdist(const Point &, const Point &);//���������� 
//private:              //������������ �������� ����� (������) ������ 

	//Point p;     //�����-������ (��������) ������ (������������� � 
	Color c;
	//static int k; // ���������� static ��������� �� ����� ������
};

#endif
