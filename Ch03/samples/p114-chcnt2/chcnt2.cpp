// chcnt2.cpp
// ������� ����� ���� � �������� � ������
#include <iostream>
using namespace std;
#include <conio.h>           // ��� getche()

int main()
{
	int chcount = 0;
	int wdcount = 1;           // ������ ����� ����� �������
	char ch;
	
	while( (ch=getche()) != '\r' ) // ����, ���� �� ������ ������� Enter
	{
		if (ch == ' ')           	// ���� ������ ������,
			wdcount++;              // ���������������� ������� ����
		else                     	// �����
			chcount++;              // ���������������� ����� ��������
	}                          		// ����� �����������
	cout << "\nWords: " << wdcount << endl
	<<"Letters: " << chcount << endl;
	return 0;
}


