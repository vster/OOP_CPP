// formato.cpp
// ��������������� ����� � ���� � �������������� <<
#include <fstream>        // ��� ��������� �����/������
#include <iostream>
#include <string>
using namespace std;

int main()
  {

	ofstream outfile("fdata.txt"); //������� ������ ofstream

	for (int i = 0; i<10; i++)
		outfile << i << ' ';
	cout << "File written\n";
	return 0;
  }

