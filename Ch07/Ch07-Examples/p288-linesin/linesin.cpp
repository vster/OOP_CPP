// linesin.cpp
// ���� ���������� �����
#include <iostream>
using namespace std;
const int MAX = 2000; // ������������ ����� ������
char str [ MAX ];     // ���� ������
///////////////////////////////////////////////////////////
int main ( )
{
	cout << "\nEnter string:\n";
	cin.get ( str, MAX, '$' );
	cout << "You enter:\n" << str << endl;
	return 0;
}


