#include <iostream>
using namespace std;

int main()
{
	int funts, shils, pens;
	int funts_d, pens_d;

	cout << "Enter sum of funts: ";
	cin >> funts;
	cout << "Enter sum of shils: ";
	cin >> shils;
	cout << "Enter sum of pens: ";
	cin >> pens;
	
	funts_d = funts;
	pens_d = (12 * shils + pens) * 100 / 240;
	cout << "Decimal funts: J" << funts_d << "." << pens_d;

	return 0;
}