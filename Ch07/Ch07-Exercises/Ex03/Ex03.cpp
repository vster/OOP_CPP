#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet( 0 ), inches ( 0 )
		{}
		void getdist ( )	// ��������� ����������
		{
			cout << "\n  Enter feet: "; cin >> feet;
			cout << "  Enter inches: "; cin >> inches;
		}
		void showdist ( ) const		// ����� ����������
			{ cout << feet << "\'-" << inches << '\"'; }
		void add_dist( Distance, Distance ); // ��������
		void div_dist( Distance, int);
};
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
