// sstrchng.cpp
// ��������� ������ ������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	string s1 ( "Vse haraso, prekrasnay markiza." );
	string s2 ( "princessa" );
	string s3 ( "Privetstvuy " );

	s1.erase ( 0, 12 );              // ������� "��� ������, "
	s1.replace ( 11, 7, s2 );        // �������� "�������" �� "���������"
	s1.insert ( 0, s3 );             // ��������� "�����������, "
	s1.erase ( (s1.size ( ) - 1), 1 ); // ������� '.'
	s1.append ( 3, '!' );            // ��������� '!!!'

	int x = (int)s1.find ( ' ' );         // ���� �������
	while ( x < (int)s1.size ( ) )        // ���� �� ���� ��������
	{
//		s1.replace ( x, 1, '/' );      // �������� ������ �� '/'
		x = (int)s1.find ( ' ' );           // ���� ��������� ������
	}

	cout << "s1: " << s1 << endl;

	return 0;
}


