#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
const int ELEMS = 5;

int maxint( int ara[ELEMS], int n);

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

int maxint( int ara[ELEMS], int n)
{
	int maxj = 0;
	int maxar = 0;

	for ( int j = 0; j < n; j++)
	if ( maxar < ara[j] )
		{
			maxar = ara[j];
			maxj = j;
		}
	return maxj;
}	 
