//Listing 2.1. ���� Point.h: ����������� ������ Point 

#ifndef POINT_H
#define POINT_H 

class Point //��������� �������� ������ Point  
{ //������ �������� (�� ���������) ����� ������ 

private: //������������ �������� ����� (������) ������ 

	float x_, y_; //�����-������ (��������) ������ (������������� � 
	//����� � ��� ����������� ������������ ���������) 

public: //������������ �������� ����� - ���������� ������ 

	//** 1 **����������� ��������� ������ 
	//����������� ���� ������ ������� (������-���������) 
	// Get...() � Set...() �������� ����������� ��������� ������ 

	float GetX();		//����-������� (�����) ��� ������ ���������� �_ 
	//{ //����������� ������ � ������ ������ ��������� ��� 
	//	return x_; // ���������� (inline) (����� ����� ��������) 
	//}

	float GetY(); //��� �������� ������, � ��� ����������� ���������  
	//����� ��, �� ����� �������� ������ (��� �����) 
	void SetX(float); //����� ��� ��������� �������� ���������� �_, 
	//����������� ��� � ���� ��������� ������� 
	void SetY(float); //����������� � ����� ���������� Point.cpp 
	void PrintPoint(int precision = 2); // ������� ������� �������� ��������� �����
};

//����������� ���������� ������� ������ ���� ������� ����������� � ����� 
//�� ������, �� ���� ������� ��� ����������� � ������������ �����. 
//����� �������-������, ������������ ��� ��������� ������, ������ ���� 
//��������� ��������������� (��������) ��� ������ ��������� ��������� :: 

inline float Point::GetX() //����� inline ���� ��������� ���� 
{
	return x_;
}

inline float Point::GetY() //����� inline ���� ��������� ���� 
{
	return y_;
}

#endif 
