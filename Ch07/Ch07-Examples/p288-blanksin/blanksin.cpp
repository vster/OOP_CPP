// blanksin.cpp
// ���� ������ � ���������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	const int MAX = 80; // ������������ ����� ������
	char str [ MAX ];   // ���� ������

	cout << "\nEnter string: ";
	cin.get ( str, MAX );
	cout << "You enter: " << str << endl;

	return 0;
}


