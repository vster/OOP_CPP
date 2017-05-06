// xofxref.cpp
// ����������� �����������: X(X&)
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class alpha
  {
  private:
    int data;
  public:
    alpha()            //����������� ��� ����������
      { }
    alpha(int d)       //����������� � ����� ����������
      { data = d; }
    alpha(alpha& a)    //����������� �����������
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

  a2 = a1;             //������ �������������� =
  cout << "\na2="; a2.display();  //������� a2

  alpha a3(a1);        //������ ������������ �����������
// alpha a3 = a1;      //������������� ����������� a3
  cout << "\na3="; a3.display();  //������� a3
  cout << endl;
  return 0;
  }


