//assign2.cpp
// ������� ����������� ��������� this
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class alpha
  {
  private:
    int data;
  public:
    alpha()                      // ����������� ��� ����������
      { }
    alpha(int d)                 // ����������� � ����� ����������
      { data = d; }
    void display()               // ������� ������
      { cout << data; }
    alpha& operator = (alpha& a) // ������������� �������� =
      {
      data = a.data;             // �� �������� �������������
      cout << "\nRun assign operator";
      return *this;              // ������� ����� this alpha
      }
  };
///////////////////////////////////////////////////////////
int main()
  {
  alpha a1(37);
  alpha a2, a3;

  a3 = a2 = a1;                  // ������������� =, ������
  cout << "\na2="; a2.display(); // ������� a2
  cout << "\na3="; a3.display(); // ������� a3
  cout << endl;
  return 0;
  }


