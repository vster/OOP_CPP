#include <iostream>
#include "ex08.h"
using namespace std;

int main()
{
	int n1 = 5, n2 = 20;

	cout << "Numbers are " << n1 << " and " << n2 << endl;
	swap( n1, n2 );
	cout << "After swap" << endl;
	cout << "Numbers are " << n1 << " and " << n2 << endl;
	return 0;
}
