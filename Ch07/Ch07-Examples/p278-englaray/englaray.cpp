// englaray.cpp
// ������� ��� ���������� ���
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		void getdist ( )	// ��������� ����������
		{
			cout << "\n  Enter feet: "; cin >> feet;
			cout << "  Enter inches: "; cin >> inches;
		}
		void showdist ( ) const		// ����� ����������
			{ cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist [ 100 ]; // ������ ����������
	int n = 0;             // ������� ������
	char ans;              // ����� ������������ (�/�)

	cout << endl;

	do
	{
		cout << "Enter length number " << n + 1;
		dist [ n++ ].getdist ( );      // �������� � ��������� �����
		cout << "Continue (y/n)?: ";
		cin >> ans;
	}
	while ( ans != 'n' );            // ����������, ���� �� ����� ������� '�'

	// ���������� ��� ���������
	for ( int j = 0; j < n; j++ )
	{
		cout << "\nLength number " << j + 1 << " : ";
		dist [ j ].showdist ( );
	}

	cout << endl;

	return 0;
}

