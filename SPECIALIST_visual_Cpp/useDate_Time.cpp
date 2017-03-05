#include <iostream>
#include <iomanip>
#include <cmath>

#include "Time.h"
#include "Date.h"


using namespace std;



int main()
{
	Time t;
	if (t.Read())
	{
		t.Print(); cout << endl;
	}

	//	t.min +=1000;
	t.Print(); cout << endl;

	Date d;
	if (d.Read())
	{
		d.Print(); cout << endl;
	}
	system("pause");
}