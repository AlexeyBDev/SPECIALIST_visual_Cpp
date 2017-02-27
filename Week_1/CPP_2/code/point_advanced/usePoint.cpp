//Listing 2.3. ‘айл usePoint.cpp: клиентский код, использующий Point 

#include <iostream> 
#include <cmath> 

#include "Point.h" 

using namespace std; 

//клиентска€ функци€ дл€ измерени€ рассто€ни€ между точками 

double gdist(Point &a, Point &b)                   //передача по ссылке 
{                      //использует Get...() дл€ доступа к x_ и y_ 
      return sqrt(pow(static_cast<double>(a.GetX()-b.GetX()),2) 
                   +pow(static_cast<double>(a.GetY()-b.GetY()),2)); 
} 

int main() 
{ 

//** 1 **использование минимального интерфейса 

      Point a;                    //—оздание экземпл€ра класса Point в стеке 

//    a.x_ = 6;                   //ERROR, т.к. x_ объ€влен private 
//    a.y_ = 8;                   //ERROR, т.к. y_ объ€влен private 

      a.SetX(6); 
      a.SetY(8); 
      cout << a.GetX() << ',' << a.GetY() << endl; 

      Point *p = new Point;  //—оздание экземпл€ра класса Point в куче 
      p->SetX(9); 
      p->SetY(12); 
      cout << p->GetX() << ',' << p->GetY() << endl; 

      cout << "Distance = " 
           << gdist(a,*p)         //разадресаци€, т.к. требуетс€ Point 
           << endl; 
//** 2 ** использование расширенного интерфейса 

      a.Move(-10,4); 
      p->Read("Enter Point in the form(x,y) "); 

      cout << "Distance from ";        a.Print(); 
      cout << " to ";                  p->Print(); 
      cout << " is " << p->Dist(a) << endl;                  //или a.Dist(*p) 



//** 3 ** вызов friend-функции 

       cout << "Distance = " << fdist(a,*p) << endl; 

      delete p;
      	system("pause");
                         //”даление из кучи (нельз€ забывать!) 
} 

