#include <iostream>
using namespace std;
#include "ex01.h"

// ����������� ��� ����������
Distance::Distance ( ) : feet ( 0 ), inches ( 0.0 )
	{ }
// ����������� � ����� �����������
Distance::Distance ( int ft, float in ) : feet ( ft ), inches ( in )
	{ }
// ��������� ���������� �� ������������
void Distance::getdist ( )
{
	cout << "\nEnter feet: "; cin >> feet;
	cout << "Enter inches: ";  cin >> inches;
}
// ����� ����������
void Distance::showdist ( )
{ cout << feet << "\'-" << inches << '\"'; }
///////////////////////////////////////////////////////////
// �������� ���� ����
Distance Distance::operator+ ( Distance d2 ) const
{
	int f = feet + d2.feet;       // ���������� ����
	float i = inches + d2.inches; // ���������� �����
	if ( i >= 12.0 )              // ���� ������ ����� ������ 12
	{
		i -= 12.0;                  // �� ��������� ����� �� 12
		f++;                        // � ����������� ���� �� 1
	}
	return Distance ( f, i );     // ������� � ���������� ��������� ����������
}
// ��������� ���� ����
Distance Distance::operator- ( Distance d2 ) const
{
	int f = feet - d2.feet;       // �������� ����
	float i = inches - d2.inches; // �������� �����
	if ( i < 0.0 )              // ���� ������ ����� ������ 0
	{
		i += 12.0;                  // �� ����������� ����� �� 12
		f--;                        // � ��������� ���� �� 1
	}
	return Distance ( f, i );     // ������� � ���������� ��������� ����������
}
