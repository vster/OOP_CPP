// engpleq.cpp
// ���������� �������� +=
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance          // ����� ���������� ��� �����
{
	private:
		int feet;
		float inches;
	public:
		// ����������� ��� ����������
		Distance ( ) : feet ( 0 ), inches ( 0.0 )
		{ }
		// ����������� � ����� �����������
		Distance ( int ft, float in ) : feet ( ft ), inches ( in )
		{ }
		// ��������� ���������� �� ������������
		void getdist ( )
		{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: ";  cin >> inches;
		}
		// ����� ����������
		void showdist ( )
		{ cout << feet << "\'-" << inches << '\"'; }
		// �������� � �����������
		void operator+= ( Distance ) const;
};
///////////////////////////////////////////////////////////
void Distance::operator+= ( Distance d2 )
{
	feet += d2.feet;      // ���������� ����
	inches += d2.inches;  // ���������� �����
	if ( inches >= 12.0 ) // ���� ������ ������ 12
	{
		inches -= 12.0;     // �� ��������� ����� �� 12
		feet++;             // ����������� ���� �� 1
	}
}
///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist1;              // ���������� ����������
	dist1.getdist ( );           // � ������ ����������
	cout << "\ndist1 = "; dist1.showdist ( );

	Distance dist2 ( 11, 6.25 ); // ��������� � �������������� ������ ����������
	cout << "\ndist2 = "; dist2.showdist ( );

	dist1 += dist2;              // dist1 = dist1 + dist2
	cout << "\nAfter addition:";

	cout << "\ndist1 = "; dist1.showdist ( );
	cout << endl;

	return 0;
}


