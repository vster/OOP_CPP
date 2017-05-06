#include <iostream>
#include <cmath>
using namespace std;
#include "ex05.h"

int main()
{
	fraction frac[10];
	fraction sumfrac, avfrac;
	char ch;
	int n = 0;
	
	do
	{
		cout << "Enter fraction: ";
		frac[n++].fget();
		cout << "Continue (y/n)? ";
		cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < n; i++)
	{
		sumfrac.fadd(sumfrac, frac[i]);
		sumfrac.lowterms();
	}
	
	avfrac.fdiv(sumfrac, n);
	avfrac.lowterms();

	cout << "\nAverage fraction: ";
	avfrac.fput();

	return 0;
}


