#include <iostream>
#include "ex04.h"
using namespace std;


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