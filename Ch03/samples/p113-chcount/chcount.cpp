// chcount.cpp
// ������� ����� ���� � �������� � ������
#include <iostream>
using namespace std;
#include <conio.h>           // ��� getche()

int main()
{
	int chcount = 0;           	// ����� ������������ ��������
	int wdcount = 1;           	// ����� ��������
	char ch = 'a';             	// ch ������ ����� ������������ ��������
  
	cout << "Enter string: ";
	while(ch != '\r' )        	// ����, ���� �� ����� ������ ������� Enter 
	{
		ch = getche();          // ���������� �������
		if( ch == ' ' )         // ���� ������ �������� ��������,
			wdcount++;          // �� �������������� ����� ����
		else                    // � ��������� ������
		chcount++;             	// �������������� ����� ��������
	}                          	// ����� ����������� �� �����
	cout << "\nWords: " << wdcount << endl
		 << "Letters: " << (chcount-1)<< endl;
	return 0;
}

