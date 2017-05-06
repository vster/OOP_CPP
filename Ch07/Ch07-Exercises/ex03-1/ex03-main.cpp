#include <iostream>
using namespace std;
#include "ex03.h"

///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist [ 100 ]; // ������ ����������
	Distance SumDist, AvDist;
	int n = 0;             // ������� ������
	char ans;              // ����� ������������ (�/�)
	int j;	

	cout << endl;
	do
	{
		cout << "Enter length number " << n + 1;
		dist [ n++ ].getdist ( );      // �������� � ��������� �����
		cout << "Continue (y/n)?: ";
		cin >> ans;
	}
	while ( ans != 'n' );            // ����������, ���� �� ����� ������� '�'

	
	for ( j = 0; j < n; j++)
	{
		SumDist.add_dist(SumDist, dist[j]);
	}
	AvDist.div_dist(SumDist, n);
		
	// ���������� ��� ���������
	for ( j = 0; j < n; j++ )
	{
		cout << "\nLength number " << j + 1 << " : ";
		dist [ j ].showdist ( );
	}
	
	cout << "\nAverage distance: "; AvDist.showdist();
	
	cout << endl;

	return 0;
}
