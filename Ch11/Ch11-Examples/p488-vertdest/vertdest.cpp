//vertdest.cpp
//���� ������������� � ����������� ������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Base
{
   public:
//      ~Base()                 //������������� ����������
	    virtual ~Base()         //����������� ����������
         { cout << "Base removed\n"; }
};
///////////////////////////////////////////////////////////
class Derv : public Base
{
   public:
      ~Derv()
         { cout << "Derv removed\n"; }
};
///////////////////////////////////////////////////////////
int main()
{
   Base* pBase = new Derv;
   delete pBase;
   return 0;
}


