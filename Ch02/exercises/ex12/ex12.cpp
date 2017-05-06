#include <iostream>
using namespace std;

int main()
{
	int pounds, shils, pens;
	float decpounds, decfrac;
	

	cout << "Enter sum of decimal pounds: ";
	cin >> decpounds;
	
	pounds = static_cast<int>(decpounds);
	decfrac = decpounds - pounds;
	shils = static_cast<int> (decfrac * 20);
	pens = static_cast<int> ((decfrac * 20 - shils) * 12);
	
	cout << "Equal sum in old record: J" << pounds << "." << shils << "." << pens << endl;

	return 0;
}