// ambigu.cpp
// демонстраци€ неопределенности при множественном наследовании
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class A
{
  public:
    void show ( ) { cout << "Class A\n"; }
};
class B
{
  public:
    void show ( ) { cout << "Class B\n"; }
};
class C : public A, public B
{
};
///////////////////////////////////////////////////////////
int main ( )
{
  C objC;           // объект класса C
  // objC.show ( ); // так делать нельз€ Ц программа не скомпилируетс€
  objC.A::show ( ); // так можно
  objC.A::show ( ); // так можно
  return 0;
}


