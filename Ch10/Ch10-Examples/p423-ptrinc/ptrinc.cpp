// ptrinc.cpp
// ������ � ������� ����� ���������
#include <iostream>
using namespace std;

int main ( )
{
  int intarray [ 5 ] = { 31, 54, 77, 52, 93 }; // ����� ����� �����
  int* ptrint;                     // ��������� �� int
  ptrint = intarray;               // ����� �� ��������� �� ��� ������

  for( int j = 0; j < 5; j++ )     // ��� ������� �������� �������
    cout << *( ptrint++ ) << endl; // ���������� ��� ��������

  return 0;
}


