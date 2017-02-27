#include <iostream>
#include <iomanip>
using namespace std;

//---------------------------------------------------------------------

class Time  
{
private:
	int hour, min, sec;
public:
	bool Set(int hour, int min, int sec);
	void Print();
	bool Read(const char *mess = "Enter time in format hh:mm:ss -> ");
};


//---------------------------------------------------------------------

class Date  
{
int day, mon, year;
public:
	bool Set( int day, int month, int year);
void Print();
bool Read( const char *mess = "Enter date in format dd.mm.yyyy -> ");

};


//---------------------------------------------------------------------


int main()
{
	Time t;
	if(t.Read())
	{
		t.Print(); cout<<endl;
	}

//	t.min +=1000;
	t.Print(); cout<<endl;

	Date d;
	if(d.Read())
	{
		d.Print(); cout << endl;
	}
	 system("pause");
}

bool Time::Set(int h, int m, int s)
{
	if(h<0 || m<0 || s<0)
	{
		cerr << "Illegal time format" <<endl;
		hour = min = sec = 0;
		return false;
	}

	sec  = s % 60;	m += s / 60;
	min  = m % 60;	h += m / 60;
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
	if(	   cin >> hour 
		&& cin >> ch && ch == ':' 
		&& cin >> min	
		&& cin >> ch && ch == ':' 
		&& cin >> sec
	   )
		return Set(hour,min,sec);

	cin.clear();
	cin.ignore(128,'\n');
	cerr << "Illegal time format" <<endl;
	hour = min = sec = 0;

	return false;
}

bool Date::Set( int d, int m, int y)
{
	if(d<=0 || m--<=0 || y<=0)
	{
		cerr << "Illegal date format" <<endl;
		day =mon =year = 0;
		return false;
	}

	int dim=0;

	do
	{
		y += m/12;
		m  = m%12 +1;
		d -= dim;

		switch(m)
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
		
	}while(d>dim);

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

bool Date::Read( const char *mess)
{
	cout << mess;
	char ch;
	if(	   cin >> day 
		&& cin >> ch && ch == '.' 
		&& cin >> mon	
		&& cin >> ch && ch == '.' 
		&& cin >> year
	   )
		return this->Set(day,mon,year);

	cin.clear();
	cin.ignore(128,'\n');
	cerr << "Illegal date format" <<endl;
	day = mon = year = 0;

	return false;
}
