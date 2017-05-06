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
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ n ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray<int> sa1;
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

	safearray<float> sa2;
	
	// ������ �������� ���������
	for ( j = 0; j < LIMIT; j++ )
		sa2[ j ] = j * 10;    // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for ( j = 0; j < LIMIT; j++ )
	{
		float temp = sa2 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}

	safearray<double> sa3;
	
	// ������ �������� ���������
	for ( j = 0; j < LIMIT; j++ )
		sa3[ j ] = j * 10;    // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for ( j = 0; j < LIMIT; j++ )
	{
		double temp = sa3 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}

	safearray<char> sa4;
	
	// ������ �������� ���������
	for ( j = 0; j < LIMIT; j++ )
		sa4[ j ] = j +'0';    // ���������� ������� ����� �� ����� =

	// ���������� ��������
	for ( j = 0; j < LIMIT; j++ )
	{
		char temp = sa4 [ j ]; // ���������� ������� ������ �� ����� =
		cout << "Element " << j << " equal " << temp << endl;
	}



	return 0;
}

