// ptrstr.cpp
// ����� ������, ������������ ����� ���������
#include <iostream>
using namespace std;

int main ( )
{
  void dispstr ( char* ); // �������� �������
  char str [ ] = "All my troubles seemed so far away.";

  dispstr ( str );

  return 0;
}
///////////////////////////////////////////////////////////
void dispstr ( char* ps )
{
  while( *ps )            // ���� �� �������� ����� ������
    cout << *ps++;        // ����� ����������� �������� �� �� �����
  cout << endl;
}


