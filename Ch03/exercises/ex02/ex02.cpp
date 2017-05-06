#include <iostream>
using namespace std;

int main()
{
	float ftemp, ctemp;
	int type;

	cout << "Press 1 for conversion from Celcius to Farenheit," << endl
		<< "2 for conversion from Farenheit to Celcius: ";
	cin >> type;
	if (type == 1)
	{
		cout << "Enter temperature in Celcius: ";
		cin >> ctemp;
		ftemp = ctemp * 9.0 / 5.0 + 32.0;
		cout << "Temperature in Farenheit is: " << ftemp << endl;
	}
	else if (type == 2)
	{
		cout << "Enter temperatue in Farenheit: ";
		cin >> ftemp;
		ctemp = (ftemp - 32.0) * 5.0 / 9.0;
		cout << "Temperature in Celcius is: " << ctemp << endl;
	}
	return 0;
}
