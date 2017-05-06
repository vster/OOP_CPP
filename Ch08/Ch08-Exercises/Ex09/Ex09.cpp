// arrover3.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ���������� �������� [ ]
#include <iostream>
using namespace std;
#include <process.h>      // ��� ������� exit
const int MINLIM = 100;    // ������ �������
const int MAXLIM = 175;
///////////////////////////////////////////////////////////
class safearray
{
	private:
		int arr [ MAXLIM - MINLIM ];
	public:
		// �������� ��������, ��� ������� ���������� ������!
		int& operator[ ] ( int n )
		{
			int i = n - MINLIM;
			if ( i < 0 || i >= ( MAXLIM - MINLIM ) )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ i ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray sa1;
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


