// straray.cpp
// ������ �����
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	const int DAYS = 7; // ���������� ����� � �������
	const int MAX = 12; // ������������ ����� ������ �� ���

	// ������ �����
	char star [ DAYS ][ MAX ] =
	{
		"Monday", "Tuesday", "Wednesday", "Thursday",
		"Fryday", "Saturday", "Sunday"
	};

	// ����� ���� ����� �� �����
	for ( int j = 0; j < DAYS; j++ )
		cout << star [ j ] << endl;

	return 0;
}


