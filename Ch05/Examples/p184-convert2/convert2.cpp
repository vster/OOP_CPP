// convert2.cpp
// ����� ���������� ������ ��������� convert
#include <iostream>
using namespace std;

float lbstokg(float);           // �������� �������

int main()
{
	float lbs;
	
	cout << "\nEnter weight in pounds: ";
	cin >> lbs;
	cout << "Weight in kilograms is " << lbstokg(lbs)
	<< endl;
	return 0;
}
//--------------------------------------------------------
// ������� lbstokg()
// ��������� ����� � ����������
float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}


