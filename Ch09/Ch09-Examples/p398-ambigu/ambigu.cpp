// ambigu.cpp
// ������������ ���������������� ��� ������������� ������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class A
{
  public:
    void show ( ) { cout << "����� A\n"; }
};
class B
{
  public:
    void show ( ) { cout << "����� B\n"; }
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


