#ifndef STRING_H
#define STRING_H 

class String
{
public:


	int Length() { return n_; }
	void Print() { std::cout << s_; }

	String(const char* str = "");
	~String();

	String(const String&);
	String& operator =(const String&);
	String& operator +=(const String&);
	friend bool operator ==(const String& lhs, const String& rhs);
	friend bool operator >(const String& lhs, const String& rhs);
	char &operator [](int i);
	const char &operator [](int i) const; // ������������ ��������� � 
	friend std::ostream & operator <<(std::ostream &, const String &);
private:
	size_t n_; //����� ������ (��� ����� ������������ �\0?) 
	char* s_; //����� ������ ��� ������ � ������������ ������ 
	//������ ���������� � ������������ 
	//�� ������� ���������� � ����������� 
	//����� ��� ������ ������� ��������������  
	//����������� ����������� � �������� ������������ 
};


String operator +(const String& lhs, const String& rhs);
bool operator !=(const String& lhs, const String& rhs);
bool operator <(const String& lhs, const String& rhs);
bool operator >=(const String& lhs, const String& rhs);
bool operator <=(const String& lhs, const String& rhs);
std::istream & operator >>(std::istream &, String &);
#endif 
