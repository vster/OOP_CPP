// passptr.cpp
// �������� ��������� �� ���������
#include <iostream>
using namespace std;

int main ( )
{
  void centimize ( double* ); // �������� �������

  double var = 10.0;          // �������� ���������� var ����� 10 (������)
  cout << "var = " << var << " inches" << endl;

  centimize ( &var );         // ��������� ����� � ����������
  cout << "var = " << var << " santimeters" << endl;

  return 0;
}
///////////////////////////////////////////////////////////
void centimize ( double* ptrd )
{
  *ptrd *= 2.54;              // *ptrd � ��� �� �� �����, ��� � var
}


