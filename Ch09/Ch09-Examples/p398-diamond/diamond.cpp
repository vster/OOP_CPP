// diamond.cpp
// ������������ ������������ � ����� �����
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class A
{
  public:
    void func ( );
};
class B : public A
{ };
class C : public A
{ };
class D : public B, public C
{};
///////////////////////////////////////////////////////////
int main ( )
{
  D objD;
  ObjD.func ( ); // ���������������: ��������� �� ��������������
  return 0;
}


