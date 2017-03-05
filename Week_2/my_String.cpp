#include <iostream>
#include <cstring>
#include "my_String.h"

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;


my_String::my_String(const char *str)
{
	n_ = strlen(str);
	s_ = new char[n_ + 1]; // возможен отказ в случае невыдиления памяти
	strcpy_s(s_,n_ + 1, str);
}

my_String::my_String(const my_String & str)
{
	n_ = str.n_;
	s_ = new char[n_ + 1]; // возможен отказ в случае невыдиления памяти
	strcpy_s(s_, n_ + 1, str.s_);
}

my_String &my_String::operator =(const my_String & str) 
{
	if (this == &str) return *this;
	delete[] s_;
	n_ = str.n_;
	s_ = new char[n_ + 1]; // возможен отказ в случае невыдиления памяти
	strcpy_s(s_, n_ + 1, str.s_);
	return *this;
}

my_String::~my_String()
{
	delete[] s_;
}
