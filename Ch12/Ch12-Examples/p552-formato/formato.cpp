// formato.cpp
// ��������������� ����� � ���� � �������������� <<
#include <fstream>        // ��� ��������� �����/������
#include <iostream>
#include <string>
using namespace std;

int main()
  {
  char ch = 'x';
  int j = 77;
  double d = 6.02;
  string str1 = "Kafka";  // ������ ���
  string str2 = "Proust"; // ��������

  ofstream outfile("fdata.txt"); //������� ������ ofstream

  outfile << ch           // �������� (��������) ������
        << j
        << ' '            // ������� ����� �������
        << d
		<< str1
        << ' '            // ������� ����� ��������
        << str2;
  cout << "File written\n";
  return 0;
  }


