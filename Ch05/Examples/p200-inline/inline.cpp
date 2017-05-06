// inline.cpp
// применение встроенных функций
#include <iostream>
using namespace std;

// функция lbstokg()
// переводит фунты в килограммы
inline float lbstokg(float pounds)
{
	return 0.453592 * pounds;
}

//--------------------------------------------------------
int main()
{
	float lbs;
	cout << "\nEnter weight in funts: ";
	cin >> lbs;
	cout << " " << lbstokg(lbs)
	<< endl;
	return 0;
}


