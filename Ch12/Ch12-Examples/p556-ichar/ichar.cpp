// ichar.cpp
// ������������ �������� ����
#include <fstream>             // ��� �������� �������
#include <iostream>
using namespace std;

int main()
  {
  char ch;                     // ������ ��� ����������
  ifstream infile("TEST.TXT"); // ������� ����
  while( infile )              // ������ �� EOF ��� ������
    {
    infile.get(ch);            // ������� ������
    cout << ch;                // � ������� ���
    }
  cout << endl;
  return 0;
  }


