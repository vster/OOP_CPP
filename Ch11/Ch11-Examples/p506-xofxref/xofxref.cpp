// xofxref.cpp
// конструктор копирования: X(X&)
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class alpha
  {
  private:
    int data;
  public:
    alpha()            //конструктор без аргументов
      { }
    alpha(int d)       //конструктор с одним аргументом
      { data = d; }
    alpha(alpha& a)    //конструктор копирования
      {
      data = a.data;
      cout << "\nRun copy constructor";
      }
    void display()     //display
      { cout << data; }
    void operator = (alpha& a) //overloaded = operator
      {
      data = a.data;
      cout << "\nRun assign operator";
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  alpha a1(37);
  alpha a2;

  a2 = a1;             //запуск перегружаемого =
  cout << "\na2="; a2.display();  //вывести a2

  alpha a3(a1);        //запуск конструктора копирования
// alpha a3 = a1;      //эквивалентное определение a3
  cout << "\na3="; a3.display();  //вывести a3
  cout << endl;
  return 0;
  }


