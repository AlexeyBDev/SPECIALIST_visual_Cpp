#ifndef TIME_H_BUB
#define TIME_H_BUB


class Time
{
private:
	int hour, min, sec;
public:
	bool Set(int hour, int min, int sec);
	void Print();
	bool Read(const char *mess = "Enter time in format hh:mm:ss -> ");
};

#endif


