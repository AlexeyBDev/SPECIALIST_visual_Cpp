// ����� ������������ ����������� ����������� ���� �����
#ifndef TRIANGLE_H_BUB
#define TRIANGLE_H_BUB
#include "Line/point.h"

class Triangle
{
private:
	Point a_, b_, c_;
public:
	void GetTriangle();
	/**
	 * ��������� �������� ������ ������������ 
	 */
	void SetTriangle(Point, Point, Point);
	/**
	 * ������� � ������� �������� ������ ������������
	 */
	void PrintTriangle();
};

#endif
