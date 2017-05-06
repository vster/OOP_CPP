// convert2.cpp
// более компактная версия программы convert
#include <iostream>
using namespace std;

float lbstokg(float);           // прототип функции

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
// функция lbstokg()
// переводит фунты в килограммы
float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}


