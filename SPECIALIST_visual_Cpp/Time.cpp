#include <iostream>
#include <iomanip>
#include "Time.h"

using namespace std;


bool Time::Set(int h, int m, int s)
{
	if (h<0 || m<0 || s<0)
	{
		cerr << "Illegal time format" << endl;
		hour = min = sec = 0;
		return false;
	}

	sec = s % 60;	m += s / 60;
	min = m % 60;	h += m / 60;
	hour = h % 24;

	return true;
}


void Time::Print()
{
	cout << hour
		<< ':' << setfill('0') << setw(2)
		<< min
		<< ':' << setw(2)
		<< sec
		<< setfill(' ');
}

bool Time::Read(const char *mess)
{
	cout << mess;
	char ch;
	if (cin >> hour
		&& cin >> ch && ch == ':'
		&& cin >> min
		&& cin >> ch && ch == ':'
		&& cin >> sec
		)
		return Set(hour, min, sec);

	cin.clear();
	cin.ignore(128, '\n');
	cerr << "Illegal time format" << endl;
	hour = min = sec = 0;

	return false;
}
