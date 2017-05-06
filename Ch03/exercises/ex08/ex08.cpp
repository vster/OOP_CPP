#include <iostream>
using namespace std;

int main()
{
	int pounds1, shils1, pens1;
	int pounds2, shils2, pens2;
	int pounds3, shils3, pens3;
	char ch;

	do {
		cout << "Enter first sum: ";
		cin >> ch >> pounds1 >> ch >> shils1 >> ch >> pens1;
		cout << "Enter second sum: ";
		cin >> ch >> pounds2 >> ch >> shils2 >> ch >> pens2;

		pounds3 = pounds1 + pounds2;
		shils3 = shils1 + shils2;
		pens3 = pens1 + pens2;
		if (pens3 > 11)
			{
			shils3++;
			pens3 -= 12;
			}
		if (shils3 > 19)
			{
			pounds3++;
			shils3 -= 20;
			}
		cout << "Total: J" << pounds3 << "." << shils3 << "." << pens3 << endl;
		cout << "Continue(y/n)? ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}
