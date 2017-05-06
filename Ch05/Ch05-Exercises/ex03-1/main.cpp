#include <iostream>
#include "ex03.h"

using namespace std;


int main()
{
	
	int n1, n2;

	cout << "Enter 2 numbers: ";
	cin >> n1 >> n2;

	zeroSmaller( n1, n2);

	cout << "Numbers are " << n1 << " and " << n2;

	return 0;
}