#ifndef SHAPE_H
#define SHAPE_H

//#include <iostream>

// ������������ ������� ����� (������������)
class Shape 
{
//private:
//	int i;
public:

	virtual ~Shape() {};
	// ����� ����������� �������
	virtual void Print(std::ostream & = std::cout)const = 0; // = 0 - ��� ����� ����������� �������
	virtual void Move(int delta_x, int delta_y) = 0; // ���������� ���

	// virtual void Scale(double factor) = 0;
	// virtual void Draw(View &) = 0;
	// virtual void Erase(View &) = 0;
	// virtual void Rotate(?????) = 0;
};

#endif

