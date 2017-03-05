#include <iostream>
#include <iomanip>
#include "Date.h"

using namespace std;


bool Date::Set(int d, int m, int y)
{
	if (d <= 0 || m-- <= 0 || y <= 0)
	{
		cerr << "Illegal date format" << endl;
		day = mon = year = 0;
		return false;
	}

	int dim = 0;

	do
	{
		y += m / 12;
		m = m % 12 + 1;
		d -= dim;

		switch (m)
		{
		case 2:
			dim = 28 + (y % 4 == 0 && (y % 100 || y % 400 == 0));
			break;
		case 4: case 6: case 9: case 11:
			dim = 30;
			break;
		default:
			dim = 31;
			break;
		}

	} while (d>dim);

	day = d;
	mon = m;
	year = y;

	return true;

}

void Date::Print()
{
	cout << setfill('0')
		<< setw(2) << day << '.'
		<< setw(2) << mon << '.'
		<< year
		<< setfill(' ');
}

bool Date::Read(const char *mess)
{
	cout << mess;
	char ch;
	if (cin >> day
		&& cin >> ch && ch == '.'
		&& cin >> mon
		&& cin >> ch && ch == '.'
		&& cin >> year
		)
		return Set(day, mon, year);

	cin.clear();
	cin.ignore(128, '\n');
	cerr << "Illegal date format" << endl;
	day = mon = year = 0;

	return false;
}
