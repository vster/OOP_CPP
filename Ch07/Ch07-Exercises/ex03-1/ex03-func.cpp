#include <iostream>
using namespace std;
#include "ex03.h"

Distance::Distance() : feet( 0 ), inches ( 0 )
	{}
void Distance::getdist ( )	// ��������� ����������
{
	cout << "\n  Enter feet: "; cin >> feet;
	cout << "  Enter inches: "; cin >> inches;
}
void Distance::showdist ( ) const		// ����� ����������
{ 
	cout << feet << "\'-" << inches << '\"'; 
}
//--------------------------------------------------------
// �������� ���� d1 � d2
void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d1.inches + d2.inches;        // �������� ������
	feet = 0;                              // � ��������� ������
	if(inches >= 12.0)                     // ���� ����� ������ ������ 12.0,
	{                                      // �� ��������� ����� ������
		inches -= 12.0;                      // �� 12.0 � �����������
		feet++;                              // ����� ����� �� 1
	}
	feet +=	d1.feet + d2.feet;             // �������� �����
}
void Distance::div_dist( Distance d1, int divisor)
{
	float fltfeet = d1.feet + d1.inches / 12.0F;
	fltfeet /= divisor;
	feet = (int) fltfeet;
	inches = ( fltfeet - (float) feet ) * 12.0F;
}
