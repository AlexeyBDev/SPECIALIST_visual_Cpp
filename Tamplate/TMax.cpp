#include <iostream>
#include <cstring>
using namespace std;

// явное всегда имеет преимущетсво над шаблоном
const char * MyMax(const char *a, const char *b)
{
	return strcmp(a, b) > 0 ? a : b;
}

template<typename T>
T MyMax(T a, T b)
{
	return a > b ? a : b;
}

int main(int argc, char* argv[])
{
	int a = 5, b = 9, im;
	im = MyMax(a, b);
	cout << "Max(" << a << "; " << b << ") = " << im << endl;

	float af = 5.f, bf = 9.4f, imf;
	imf = MyMax(af, bf);
	cout << "Max(" << af << "; " << bf << ") = " << imf << endl;

	im = MyMax(a + 5, b - 3); // использование ранее перегруженного шаблона
	cout << "Max(" << a + 5 << "; " << b - 3 << ") = " << im << endl;

	char ac = 5, bc = 9, imc;
	imc = MyMax(ac, bc);
	cout << "Max(" << ac << "; " << bc << ") = " << imc << endl;

	const char * p = "arba", *q = "arbaled", *pm;
	pm = MyMax(p, q);
	cout << "Max(" << p << "; " << q << ") = " << pm << endl;

	pm = MyMax("arba", "arbaled");
	cout << "Max(" << "arba" << "; " << "arbaled" << ") = " << pm << endl;
	
	pm = MyMax("arbaled", "arba");
	cout << "Max(" << "arba" << "; " << "arbaled" << ") = " << pm << endl;

	//MyMax(a, af);
	MyMax(float(a), af); // явное приведение аргумента
	MyMax<double>(a, af);

	return 0;
}

