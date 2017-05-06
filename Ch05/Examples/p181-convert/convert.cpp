// convert.cpp
// демонстрирует механизм возврата значения функцией
#include <iostream>
using namespace std;

float lbstokg(float);           // прототип функции

int main()
{
	float lbs, kgs;
	cout << "\nEnter weight in pounds: ";
	cin >> lbs;
	kgs = lbstokg(lbs);
	cout << "Weight in kilograms is  " << kgs << endl;
	return 0;
}

//--------------------------------------------------------
// функция lbstokg()
// переводит фунты в килограммы
float lbstokg( float pounds )
{
	float kilograms = 0.453592 * pounds;
	return kilograms;
}

