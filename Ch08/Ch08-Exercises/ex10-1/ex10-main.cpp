#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "ex10.h"

int main()
{
	Polar p1, p2, p3;
	
	cout << "Enter polar coords of point P1, r & phi (in grad): ";
	p1.getp();
	cout << "Enter polar coords of point P2, r & phi (in grad): ";
	p2.getp();
			
	cout << endl;
	cout << "Polar coords of point P1: ";
	p1.putp();
	cout << endl;
	cout << "Orto coords of point P1: ";
	p1.putxy();
	cout << endl;

	cout << "Polar coords of point P2: ";
	p2.putp();
	cout << endl;
	cout << "Orto coords of point P2: ";
	p2.putxy();
	cout << endl;
	
	p3 = p1 + p2;

	cout << "Polar coords of point P3: ";
	p3.putp();
	cout << endl;
	cout << "Orto coords of point P3: ";
	p3.putxy();
	cout << endl;

	return 0;
}



