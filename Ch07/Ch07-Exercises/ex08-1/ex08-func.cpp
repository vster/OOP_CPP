#include <iostream>
#include <cstring>
#include "ex08.h"
using namespace std;

safearay::safearay()
	{}
void safearay::putel(int j, int e)
{ 
	if ((j >=0) && (j <= LIMIT-1))
	{ 
		elim[j] = e;
	}
	else
		cout << "\nIndex " << j << " out of range.\n";
}
int safearay::getel(int j)
{
	if ((j >=0) && (j <= LIMIT-1))
		return elim[j];
	else
		cout << "\nIndex " << j << " out of range.\n";
}