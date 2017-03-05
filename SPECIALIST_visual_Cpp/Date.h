#ifndef DATE_H_BUB
#define DATE_H_BUB



struct Date
{
private:
	int day, mon, year;
public:
	bool Set(int day, int month, int year);
	void Print();
	bool Read(const char *mess = "Enter date in format dd.mm.yyyy -> ");

};


#endif


