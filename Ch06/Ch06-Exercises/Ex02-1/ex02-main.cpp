#include <iostream>
#include <conio.h>
using namespace std;
#include "ex02.h"

int main()
{
	tollBooth tb1;
	char ch;

	cout << "\nPress 1 for paying car, "
		 << "press 0 for car without paying." << endl
		 << "Press ESC for exit.\n";
	do
	{
		ch = getche();
		if (ch == '1')
			tb1.payingCar();
		if (ch == '0')
			tb1.nopayCar();
	} while (ch != ESC);
	tb1.display();
	return 0;
}