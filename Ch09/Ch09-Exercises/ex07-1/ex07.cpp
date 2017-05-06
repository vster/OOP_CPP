#include <iostream>
#include "ex07.h"

using namespace std;


///////////////////////////////////////////////////////////
int main ( )
{
	CountPost c1;                            // ���������� ������ CountDn
	CountPost c2 ( 100 );

	cout << "\nc1 = " << c1.get_count ( ); // ������� �������� �� �����
	cout << "\nc2 = " << c2.get_count ( );

	c1++; c1++; c1++;                      // ����������� c1
	cout << "\nc1 = " << c1.get_count ( ); // ���������� ���������


	c1--; c1--; c1--;                      // ��������� c1
	cout << "\nc1 = " << c1.get_count ( ); // ���������� ���������


	c2++; c2++;                            // ����������� c2
	cout << "\nc2 = " << c2.get_count ( );   // ���������� ���������

	c2--; c2--;                            // ��������� c2
	cout << "\nc2 = " << c2.get_count ( );   // ���������� ���������

	
	CountPost c3 = c2--;                     // ������� ���������� c3 �� ������ c2
	cout << "\nc3 = " << c3.get_count ( ); // ���������� ��������

	cout << endl;

	return 0;
}