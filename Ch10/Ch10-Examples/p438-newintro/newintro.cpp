// newintro.cpp
// ������������ � ���������� new
#include <iostream>
#include <cstring>
using namespace std;

int main ( )
{
  char* str = "Now it looks as thow they here to stay.";
  int len = strlen ( str );        // �������� ����� ����� ������

  char* ptr;                       // ��������� ����������
  ptr = new char [ len +1 ];       // ������� ������

  strcpy ( ptr, str );             // ��������� ������ str � ptr

  cout << "ptr = " << ptr << endl; // ������� ��� ���������� � ptr

  delete [] ptr;                   // ��������� ���������� ������

  return 0;
}


