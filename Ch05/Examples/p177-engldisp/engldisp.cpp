// engldisp.cpp
// �������� ����������� ���������� � �������
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance              // ����� � ���������� �������
{
	int feet;
	float inches;
};

//////////////////////////////////////////////////////////
void engldisp( Distance );   // ����������
int main()
{
	Distance d1,d2;            	// ����������� ���� ����
								// ���� �������� ����� d1
	cout << "Enter number of foots: "; cin >> d1.feet;
	cout << "Enter number of inches: "; cin >> d1.inches;
								// ���� �������� ����� d2
	cout << "\nEnter number of foots: "; cin >> d2.feet;
	cout << "Enter number of inches: "; cin >> d2.inches;
	cout << "\nd1 = ";
	engldisp(d1);              // ����� �������� d1
	cout << "\nd2 = ";
	engldisp(d2);              // ����� �������� d2
	cout << endl;
	return 0;
}

//--------------------------------------------------------
// ������� engldisp(), ������������ ��������
// ����� ����������� ���������� ���� Distance
void engldisp( Distance dd )  // �������� dd ���� Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

