#include <iostream>
#include <typeinfo>

using namespace std;

class Point
{
public:
	virtual ~Point(){}
	virtual void Print() const
	{
		cout << "I'm Point" << endl;
	}
};

class Circle : public Point
{
public:
	virtual ~Circle() {}
	virtual void Print() const
	{
		cout << "I'm Circle" << endl;
	}
	virtual void Area() const
	{
		cout << "Circle has Area" << endl;
	}
};

class Cylinder : public Circle
{
public:
	virtual ~Cylinder() {}
	virtual void Print() const
	{
		cout << "I'm Cylinder" << endl;
	}
	virtual void Area() const
	{
		cout << "Cylinder has Area" << endl;
	}
	virtual void Volume() const
	{
		cout << "Cylinder has Volume" << endl;
	}
};


void Test(const Point *p)
{
	p->Print();
	cout << "___________dynamic_cast<>()" << endl;
	if (const Circle *q = dynamic_cast<const Circle *>(p))
		q->Area();
	if (const Cylinder *q = dynamic_cast<const Cylinder *>(p))
		q->Volume();
	cout << "=========typeid()" << endl;
	const type_info &ti = typeid(*p);
	cout << ti.name() << endl;
	if(ti == typeid(Circle))
	{
		const Circle *q = static_cast<const Circle *>(p);
			q->Area();
	}
	else if (ti == typeid(Cylinder))
	{
		const Cylinder *q = static_cast<const Cylinder *>(p);
			q->Area();
	}
	
}

int main()
{
	Point a;
	a.Print();
	Circle b;
	b.Print();
	b.Area();
	Cylinder c;
	c.Print();
	c.Area();
	c.Volume();
	cout << "---------------" << endl;

	Test(&a);
	Test(&b);
	Test(&c);

	return 0;
}