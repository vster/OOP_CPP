#include <iostream>
#include <iomanip>
#include "ex05.h"
using namespace std;

int main()
{
	date d1, d2;

	d1.getdate();
	d2.getdate();

	cout << "\nThe date 1 is "; d1.showdate();
	cout << "\nThe date 2 is "; d2.showdate();

	return 0;
}