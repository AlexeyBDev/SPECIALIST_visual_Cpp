//Listing 2.3. ‘айл usePoint.cpp: клиентский код, использующий Point 

#include <iostream>
#include <cmath>

#include "point.h"
//#include "../Line.h"
//#include "../Triangle.h"
#include "../my_String.h"

//#define _CRT_SECURE_NO_WARNINGS

using namespace std;

//клиентска€ функци€ дл€ измерени€ рассто€ни€ между точками 

//double gdist(Point &a, Point &b)                   //передача по ссылке 
//{                      //использует Get...() дл€ доступа к x_ и y_ 
//      return sqrt(pow(static_cast<double>(a.GetX()-b.GetX()),2) 
//                   +pow(static_cast<double>(a.GetY()-b.GetY()),2)); 
//}

//double gLen(const Line &L) //передача по ссылке 
//{ //использует Get...() дл€ доступа к x_ и y_ 
//	return sqrt(pow(static_cast<double>(L.GetS().GetX() - L.GetE().GetX()), 2)
//		+ pow(static_cast<double>(L.GetS().GetY() - L.GetE().GetY()), 2));
//}

int main()
{
	//** 1 **использование минимального интерфейса 

	//Line a; //—оздание экземпл€ра класса Point в стеке 

	////    a.x_ = 6;                   //ERROR, т.к. x_ объ€влен private 
	////    a.y_ = 8;                   //ERROR, т.к. y_ объ€влен private 

	//a.SetS(0, 0);
	//cout << a.GetS().GetX() << ',' << a.GetS().GetY() << endl;
	//a.SetE(100, 100);

	//Line* p = new Line; //—оздание экземпл€ра класса Point в куче 
	//p->SetS(100, 100);
	//p->SetE(200, 100);
	//cout << p->GetE().GetX() << ',' << p->GetE().GetY() << endl;
	//p->GetS().Print();
	//p->GetE().Print();

	//Point c;
	//c.SetX(4);
	//c.SetY(4);

	//////Triangle Tr;
	////Tr.SetTriangle(a.GetE(), a.GetS(), c);
	////cout << endl;
	////Tr.PrintTriangle();
	//

	////cout << "Distance = " 
	////     << gdist(a,*p)         //разадресаци€, т.к. требуетс€ Point 
	////     << endl; 
	////** 2 ** использование расширенного интерфейса 

	///*a.Move(-10,4); 
	//p->Read("Enter Point in the form(x,y) "); 

	//cout << "Distance from ";        a.Print(); 
	//cout << " to ";                  p->Print(); 
	//cout << " is " << p->Dist(a) << endl;*/ //или a.Dist(*p) 


	////** 3 ** вызов friend-функции 

	//cout << "Len = " << gLen(a) << endl;
	//cout << "Len = " << gLen(*p) << endl;
	//cout << fdist(c, p->GetS()) << endl;
	//cout << c.Dist(p->GetS()) << endl;

	//delete p;
	//system("pause");
	//”даление из кучи (нельз€ забывать!) 
	/*{
		Point a;
		Point b(10, 20);
		Point c(30);
		Point d(a);
		Point *p = new Point(23);
		system("Pause");
		delete p;
		a = b = c;
		cout << endl;
		b.Print();
	}*/


	my_String s;
	cout << "my_String = \n";
	s.Print();
	cout << "   Len = " << s.Len() << endl;
	my_String b = "Hello";
	cout << "my_String b = ";
	b.Print();
	cout << "   Len = " << b.Len() << endl;

	my_String *p = new my_String("Hello");
	cout << "my_String *p = ";
	(*p).Print();
	cout << "   Len = " << (*p).Len() << endl;

	my_String g = b;
	cout << "my_String g = b = ";
	b.Print();
	cout << "   Len = " << b.Len() << endl;

	my_String t = g;
	t = t;
	cout << "my_String g = g = ";
	b.Print();
	cout << "   Len = " << b.Len() << endl;

	return 0;
} 

