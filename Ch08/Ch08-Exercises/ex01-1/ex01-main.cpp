#include <iostream>
using namespace std;
#include "ex01.h"

///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist1, dist3, dist4;  // ���������� ����������
	Distance dist5, dist6;
	dist1.getdist ( );             // �������� ����������

	Distance dist2 ( 11, 6.25 );   // ���������� ���������� � ���������� ���������

	dist3 = dist1 + dist2;         // ���������� ��� ����������

	dist4 = dist1 + dist2 + dist3; // ���������� ��������� ����������

	// ����������, ��� �� � ��� ����������
	cout << "dist1 = "; dist1.showdist ( ); cout << endl;
	cout << "dist2 = "; dist2.showdist ( ); cout << endl;
	cout << "dist3 = "; dist3.showdist ( ); cout << endl;
	cout << "dist4 = "; dist4.showdist ( ); cout << endl;
	cout << endl;

	dist5 = dist4 - dist1;
	cout << "dist5 = "; dist5.showdist ( ); cout << endl;
	
	
	return 0;
}


