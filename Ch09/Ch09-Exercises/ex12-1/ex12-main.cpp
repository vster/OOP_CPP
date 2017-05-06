#include <iostream>
#include "ex12-func.h"
using namespace std;

int main()
{
	sterfrac p1, p2, p3;
	double n1, n2;

	cout << "\nEnter sum p1: ";
	p1.getsterling();
	cout << "Enter sum p2: ";
	p2.getsterling();
	cout << "Enter number n1: ";
	cin >> n1;

	cout << endl;
	cout << "p1 = ";
	p1.putsterling();
	cout << endl;
	cout << "p2 = ";
	p2.putsterling();
	cout << endl;

	p3 = p1 + p2;
	cout << "p1 + p2 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 - p2;
	cout << "p1 - p2 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 * n1;
	cout << "p1 * n1 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 / n1;
	cout << "p1 / n1 = ";
	p3.putsterling();
	cout << endl;

	n2 = p1 / p2;
	cout << "p1 / p2 = " << n2;
	cout << endl;

	return 0;
}

