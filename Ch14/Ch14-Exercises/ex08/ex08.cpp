// arrover3.cpp
// ������������ �������� ����������� �������, ������������
// ���� ������� ��� �������������
// ������������ ���������� �������� [ ]
#include <iostream>
using namespace std;
#include <process.h>      // ��� ������� exit
const int LIMIT = 100;    // ������ �������
///////////////////////////////////////////////////////////
template <class T>
class safearray
{
	private:
		T arr [ LIMIT ];
	public:
		// �������� ��������, ��� ������� ���������� ������!
		T& operator[ ] ( int n )
		{
			if ( n < 0 || n >= LIMIT )
				throw ArrEx( n );
			return arr [ n ];
		}
		class ArrEx 
		{
		public:
			int errn;
			ArrEx( int in )
			{
				errn = in;
			}
		};
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray<float> sa1;
	int j;

	// ������ �������� ���������
	try
	{
	for ( j = 0; j < LIMIT; j++ )
		sa1[ j ] = j * 10;    // ���������� ������� ����� �� ����� =

	}
	catch(safearray<float>::ArrEx ax)
	{
		cout << "\nError index is = " << ax.errn << endl;
	}


	// ���������� ��������
	try
	{
	for ( j = 0; j < LIMIT+2; j++ )
	{
		int temp = sa1 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}
	}
	catch(safearray<float>::ArrEx ax)
	{
		cout << "\nError index is = " << ax.errn << endl;
	}


	return 0;
}


