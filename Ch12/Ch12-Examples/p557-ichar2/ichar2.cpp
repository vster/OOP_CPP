// ichar2.cpp
// �������� ���� ��������
#include <fstream>             // ��� �������� �������
#include <iostream>
using namespace std;

int main()
  {
  ifstream infile("TEST.TXT"); // ������� ������� ����

  cout << infile.rdbuf();      // �������� ��� ����� � cout
  cout << endl;
  return 0;
  }


