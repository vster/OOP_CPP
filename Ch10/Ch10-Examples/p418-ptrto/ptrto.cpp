// ptrto.cpp
// ��� ���� ������ ������� ����� ���������
#include <iostream>
using namespace std;

int main ( )
{
  int var1, var2;       // ��� ����������
  int* ptr;             // ��������� �� �����

  ptr = &var1;          // ����� ptr ��������� �� var1
  *ptr = 37;            // �� �� �����, ��� var1 = 37;
  var2 = *ptr;          // �� �� �����, ��� var2 = var1;

  cout << var2 << endl; // ��������, ��� var2 ����� 37

  return 0;
}


