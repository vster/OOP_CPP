// arrover3.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ���������� �������� [ ]
#include <iostream>
using namespace std;
#include <process.h>      // ��� ������� exit
#include "ex06.h"


///////////////////////////////////////////////////////////
int main ( )
{
	safehilo sa1;
	int j;

	// ������ �������� ���������
	for ( j = MINLIM; j < MAXLIM; j++ )
		sa1[ j ] = j * 10;    // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for ( j = MINLIM; j < MAXLIM; j++ )
	{
		int temp = sa1 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}


	return 0;
}


