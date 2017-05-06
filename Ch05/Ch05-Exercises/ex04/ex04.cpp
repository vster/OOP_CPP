#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance                   // ����� � ���������� �������
{
	int feet;
	float inches;
};

//////////////////////////////////////////////////////////
Distance bigengl( Distance, Distance ); // ���������
void engldisp(Distance);

int main()
{
	Distance d1, d2, d3;            // ��� ����������� ����������
	// ���� �������� d1
	cout << "\nEnter number of feet: "; cin >> d1.feet;
	cout << "Enter number of inches: "; cin >> d1.inches;
	// ���� �������� d2
	cout << "\nEnter number of feet: "; cin >> d2.feet;
	cout << "Enter number of inches: "; cin >> d2.inches;
	d3 = bigengl(d1, d2);           // d3 ����� ���������� �������� �� d1 � d2
	cout << endl;
	cout << "Biggest from ";
	engldisp(d1); cout << " and ";    // ����� ���� ����
	engldisp(d2); cout << " is ";
	engldisp(d3); cout << endl;
	return 0;
}

//--------------------------------------------------------
// ������� bigengl()
// ���������� ������������ �������� ���� Distance �� ���� �������
Distance bigengl(Distance dd1, Distance dd2 )
{
	if(dd1.feet > dd2.feet)
		return dd1;
	if(dd1.feet < dd2.feet)
		return dd2;
	if (dd1.inches > dd2.inches)
			return dd1;
		else
			return dd2;
}

//--------------------------------------------------------
// ������� engldisp()
// ���������� ���� ����������� ���������� Distance
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
