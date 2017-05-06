// ostrstr.cpp
// ������ ��������������� ������ � ������
#include <strstream>
#include <iostream>
#include <iomanip>        // ��� ������� setiosflags()
using namespace std;
const int SIZE = 80;      // ������ ������

int main()
  {
  char ch = 'x';          // �������� ������
  int j = 77;
  double d = 67890.12345;
  char str1[] = "Kafka";
  char str2[] = "Freud";

  char membuff[SIZE];             // ����� � ������
  ostrstream omem(membuff, SIZE); // ������� ��������� ������
  omem << "ch=" << ch << endl      // �������� ���������������
                                   // ������
      << "j=" << j << endl         // � ������
      << setiosflags(ios::fixed)   // ������ � ����������
                                   // ������� (�������������)
      << setprecision(2)           // ��������� ��� ����� �����
                                   // �������
      << "d=" << d << endl
      << "str1=" << str1 << endl
      << "str2=" << str2 << endl
      << ends;         // ��������� ����� �������� '\0'
  cout << membuff;     // ����� ����������� ������
  return 0;
  }


