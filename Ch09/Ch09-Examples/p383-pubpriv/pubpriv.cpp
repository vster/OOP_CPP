// pubpriv.cpp
// ��������� ������� ������������� ��� public � private
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class A                // ������� �����
{
  private:             // ��� ������� � ������ ��������� � �����
    int privdataA;     // ������� � ��������
  protected:
    int protdataA;
  public:
    int pubdataA;
};
///////////////////////////////////////////////////////////
class B : public A     // public ������������
{
  public:
    void funct ( )
      {
        int a;
        a = privdataA; // ������, ��� �������
        a = protdataA; // ��� �����
        a = pubdataA;  // ��� �����
      }
};
///////////////////////////////////////////////////////////
class C : private A    // private ������������
{
  public:
    void funct ( )
      {
        int a;
        a = privdataA; // ������, ��� �������
        a = protdataA; // ��� �����
        a = pubdataA;  // ��� �����
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  int a;
  B objB;
  a = objB.privdataA;  // ������, ��� �������
  a = objB.protdataA;  // ������, ��� �������
  a = objB.pubdataA;   // ��� �����

  c objC;
  a = objC.privdataA;  // ������, ��� �������
  a = objC.protdataA;  // ������, ��� �������
  a = objC.pubdataA;   // ������, ��� �������

  return 0;
}


