// twostr.cpp
// �������� ����� ����� ������� � ����� ���������
#include <iostream>
using namespace std;

int main ( )
{
  char str1 [ ] = "Definition through the massif";
  char* str2 = "Definition through the pointer";

  cout << str1 << endl; // ������� ���� ������
  cout << str2 << endl;

//	str1++;               // ��� ������ ������
  str2++;               // � ��� �����

  cout << str2 << endl; // �������� str2 ������� ����������

  return 0;
}


