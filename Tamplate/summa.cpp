#include <iostream>
#include <cstdlib>
using namespace std;

template<typename T>
class Summa
{
public:
	T MySumma(T, T);
};

template <typename T>
T Summa<T>::MySumma(T a, T b)
{
	return a + b;
}


int main(int argc, char* argv[])
{
	Summa<int> ai;
	cout << ai.MySumma(1, 2) << endl;

	Summa<double> ad;
	//cout << "Max(" << a << "; " << b << ") = " << im << endl;

	return 0;
}

