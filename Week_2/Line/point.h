//Listing 2.1. ���� Point.h: ����������� ������ Point 

#ifndef POINT_H
#define POINT_H 



class Point //��������� �������� ������ Point  
{ //������ �������� (�� ���������) ����� ������ 

private: //������������ �������� ����� (������) ������ 

	int x_, y_; //�����-������ (��������) ������ (������������� � 
	//����� � ��� ����������� ������������ ���������) 

public: //������������ �������� ����� - ���������� ������ 

	//** 1 **����������� ��������� ������ 
	//����������� ���� ������ ������� (������-���������) 
	// Get...() � Set...() �������� ����������� ��������� ������ 

	int GetX() const //����-������� (�����) ��� ������ ���������� �_ 
	{ //����������� ������ � ������ ������ ��������� ��� 
		return x_; // ���������� (inline) (����� ����� ��������) 
	}

	int GetY() const; //��� �������� ������, � ��� ����������� ���������  
	//����� ��, �� ����� �������� ������ (��� �����) 
	void SetX(int); //����� ��� ��������� �������� ���������� �_, 
	//����������� ��� � ���� ��������� ������� 
	void SetY(int); //����������� � ����� ���������� Point.cpp 

	//** 2 ** ������, ����������� ���������������� ������ 

	void Print(); //������ ��������� ����� 
	//� ������� (x,y) 
	bool Read(const char* = 0); //���� � ���������� 
	//(� ����������) 
	void Move(int delta_x, int delta_y); //������������� ����������� 
	//(�� ������� �������) 
	double Dist(const Point&); //���������� ����� ������� 
	//(����� ���� ��������!) 

	//** 3 ** ������� �������, ����������� ������������� � ������ 

	friend double fdist(const Point&, const Point&);//���������� 
	// ����������� ������ ������: ������������ � �����������
	// ���� ����������� ��� ���������� �� ��������� �� ��� �������������
	// ������������
	Point() /*{}*/; // ����������� �� ���������. ���� ����� �� ��������, �� ���������� ������������
	Point(const Point &); // ����������� �����������. ���������� ������� ������������� ���� ��� ����
	Point(int, int); // ����� �����������. ����� ����������� ����
	explicit // ������ ���� ��� ���������� �����
	Point(int); // ����������� �������������
	//Point(int = 0, int = 0); // ����������� 3 � 1
	~Point() /*{}*/; // ����������
	// ������� ������������
	Point &operator =(const Point &);
};

//����������� ���������� ������� ������ ���� ������� ����������� � ����� 
//�� ������, �� ���� ������� ��� ����������� � ������������ �����. 
//����� �������-������, ������������ ��� ��������� ������, ������ ���� 
//��������� ��������������� (��������) ��� ������ ��������� ��������� :: 

inline int Point::GetY() const //����� inline ���� ��������� ���� 
{
	return y_;
}

#endif 