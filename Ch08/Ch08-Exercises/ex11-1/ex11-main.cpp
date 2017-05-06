#include <iostream>
using namespace std;
#include "ex11.h"

int main()
{
	sterling p1, p2, p3;
	double num, n3;
	
	cout << "Enter sum 1 of sterling: ";
	p1.getSterling();
	cout << "Enter sum 2 of sterling: ";
	p2.getSterling();
	cout << "Enter number: ";
	cin >> num;

	cout << endl;

	cout << "Sum 1 of sterling: ";
	p1.putSterling(); 
	cout << endl;
	cout << "Sum 2 of sterling: ";
	p2.putSterling(); 
	cout << endl;

	p3 = p1 + p2;

	cout << "Sum 1 + Sum 2 of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 - p2;

	cout << "Sum 1 - Sum 2 of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 * num;

	cout << "Sum 1 * Num of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 / num;

	cout << "Sum 1 / Num of sterling: ";
	p3.putSterling(); 
	cout << endl;

	n3 = p1 / p2;

	cout << "Sum 1 / Sum 2 number: ";
	cout << n3 << endl;

	return 0;
}

