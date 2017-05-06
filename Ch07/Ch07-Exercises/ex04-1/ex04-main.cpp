#include <iostream>
using namespace std;
#include "ex04.h"

int main ( )
{
	
	int aray[ELEMS];
	int j;
	int maxj;
	int n = ELEMS;

	for( j = 0; j < n; j++ ) 
	{
		cout << "Enter number: ";
		cin >> aray[j];
	}

	maxj = maxint(aray, n);

	cout << "Max element " << maxj 
		 << " is " << aray[maxj];
	
	return 0;
}

