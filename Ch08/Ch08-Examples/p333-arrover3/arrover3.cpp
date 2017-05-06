// arrover3.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ���������� �������� [ ]
#include <iostream>
using namespace std;
#include <process.h>      // ��� ������� exit
const int LIMIT = 100;    // ������ �������
///////////////////////////////////////////////////////////
class safearray
{
	private:
		int arr [ LIMIT ];
	public:
		// �������� ��������, ��� ������� ���������� ������!
		int& operator[ ] ( int n )
		{
			if ( n < 0 || n >= LIMIT )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ n ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray sa1;
	int j;

	// ������ �������� ���������
	for ( j = 0; j < LIMIT; j++ )
		sa1[ j ] = j * 10;    // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for ( j = 0; j < LIMIT; j++ )
	{
		int temp = sa1 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}

	return 0;
}


