// WorkingStudent.cpp: implementation of the WorkingStudent class.
//
///////////////////////////////////////////////////////

//#include "stdafx.h" //file for mustdie
#include "WorkingStudent.h"

////////////////////////////////////////////////////////
// Construction/Destruction
////////////////////////////////////////////////////////

WorkingStudent::WorkingStudent(const char *name, int year, const char *dept):
  Person(name), Student(name, year), Worker(name,dept)
   /*
    Несмотря на то, что и конструктору базового класса Student, и конструктору
    базового класса Worker передаётся параметр name, эти конструкторы
    не инициализируют общий базовый класс.
    За это отвечает конструктор Person.
   */
{}

WorkingStudent::~WorkingStudent()
{}

void WorkingStudent::Print(ostream& os) const
{
    Worker::Print(os);
    os << " and ";
    Student::Print(os);
    os << endl;
}
