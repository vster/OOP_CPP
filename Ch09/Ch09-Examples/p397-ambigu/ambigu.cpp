// ambigu.cpp
// ������������ ���������������� ��� ������������� ������������
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
  C objC;           // ������ ������ C
  // objC.show ( ); // ��� ������ ������ � ��������� �� ��������������
  objC.A::show ( ); // ��� �����
  objC.A::show ( ); // ��� �����
  return 0;
}


