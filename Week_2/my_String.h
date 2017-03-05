#ifndef MY_STRING_BUB
#define MY_STRING_BUB

#include <iostream>

using namespace std;

// тренировочный класс строки
class my_String
{
private:
	char *s_;
	size_t n_;
public:
	size_t Len() { return n_; };
	void Print() { cout << s_; };
	my_String(const char *str = "");
	my_String(const my_String &);
	my_String &operator =(const my_String &);
	~my_String();
};

#endif
