// copystr.cpp
// �������� ���� ������ � ������
#include <iostream>
using namespace std;

int main ( )
{
  void copystr ( char*, const char* ); // �������� �������
  char* str1 = "This happens once before!";
  char str2 [ 80 ];                    // ������ ������

  copystr ( str2, str1 );              // �������� ������ str1 � str2
  cout << str2 << endl;                // � ���������� ���������

  return 0;
}
///////////////////////////////////////////////////////////
void copystr ( char* dest, const char* src )
{
  while ( *src )      // ���� �� �������� ����� ������
    *dest++ = *src++; // �������� ��
  *dest = '\0';       // ����������� ������
}

