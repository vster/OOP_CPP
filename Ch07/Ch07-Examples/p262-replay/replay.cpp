// replay.cpp
// ����������� � ����� �� ����� ����������, ��������� �������������
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	int j;
	int age [ 4 ];
	for ( j = 0; j < 4; j++ )
	{
		cout << "Enter age: ";
		cin >> age [ j ];
	}
	for ( j = 0; j < 4; j++ )
		cout << "You enter: " << age [ j ] << endl;

	return 0;
}


