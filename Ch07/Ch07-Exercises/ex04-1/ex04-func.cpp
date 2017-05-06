#include <iostream>
using namespace std;
#include "ex04.h"

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
