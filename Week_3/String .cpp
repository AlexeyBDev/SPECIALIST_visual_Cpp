//Listing 3.5. ���� String.cpp � ���������� ������ String 

#include <iostream> 
#include <cstring> 

#include "String.h" 

using namespace std; 

String::String(const char *str) 
{ 
      n_ = strlen(str);                    //��������� ����� ������ 
      s_ = new char[n_+1];                 //�������� ����� 
     //����� ����� ���� ����� � ��������� ������ 
      strcpy(s_,str);                      //����������� � ����� ������ 
} 

String::~String() 
{ 
     delete[] s_;                          // ���� new[], �� � delete[] 
} 

String::String(const String &str)          //�������� ����� 
{ 
      n_ = str.n_;                         //���������� ����� ������ 
      s_ = new char[n_+1]; 
     //����� ����� ���� ����� � ��������� ������ 
      strcpy(s_, str.s_); 
} 

String & String::operator =(const String &str) 
{ 
      if(this == &str) return *this;  //������ �� ���������������� 
     delete[] s_;                          //���������� ����, ������� ������� 
      n_ = str.n_; 
      s_ = new char[n_+1]; 
     //����� ����� ���� ����� � ��������� ������ 
      strcpy(s_, str.s_); 
      return *this;                        //���������� ����� ������� 
}

String& String::operator+=(const String& rh)
{
	char* t = strcpy(new char[n_ + rh.n_ + 1], s_);
	delete[] s_;
	s_ = strcat(t, rh.s_);
	n_ += rh.n_;

	//if (this == &str) return *this;  //������ �� ���������������� 
	//delete[] s_;                          //���������� ����, ������� ������� 
	//n_ = str.n_;
	//s_ = new char[n_ + 1];
	////����� ����� ���� ����� � ��������� ������ 
	//strcpy(s_, str.s_);
	return *this;
}

String operator+(const String& lhs, const String& rhs)
{
	String t = lhs;
	return t += rhs;
} 

bool operator==(const String& lhs, const String& rhs)
{
	return strcmp(lhs.s_, rhs.s_) == 0;
}

bool operator>(const String& lhs, const String& rhs)
{
	return strcmp(lhs.s_, rhs.s_) > 0;
}

bool operator !=(const String& lhs, const String& rhs)
{
	return !(lhs == rhs);
}
bool operator <(const String& lhs, const String& rhs)
{
	return rhs > lhs;
}

bool operator >=(const String& lhs, const String& rhs)
{
	return !(lhs < rhs);
}
bool operator <=(const String& lhs, const String& rhs)
{
	return !(lhs > rhs);
}

char &String::operator [](int i)
{
	if(i >= 0 && static_cast<size_t>(i) < n_) return  s_[i];
	cerr << "Index out of range" << endl;
	static char dummp = '\0';
	return dummp;
}
const char &String::operator [](int i) const
{
	if (i >= 0 && static_cast<size_t>(i) < n_) return  s_[i];
	cerr << "Index out of range" << endl;
	static char dummp = '\0';
	return s_[n_];
}

std::ostream & operator <<(std::ostream & os, const String &rh)
{
	return os << rh.s_;
}

std::istream & operator >>(std::istream & is, String & rh)
{
	char buf[256];
	is.getline(buf, sizeof(buf));
	rh = buf;
	return is;
}
