#include <iostream>
#include <cstring>
using namespace std;
#include "ex10.h"

matrix::matrix()
	{ ilim = SZ; jlim = SZ;}

matrix::matrix( int i, int j )
	{ ilim = i; jlim = j; }

void matrix::putel( int i, int j, int elem )
{
	if ((i >= 0) && (i < ilim) 
		 && (j >= 0) && (j < jlim))
			arlim[i][j] = elem;
	else 
		cout << "\nOut of range.\n";
}

int matrix::getel( int i, int j )
{
	if ((i >= 0) && (i < ilim) 
		 && (j >= 0) && (j < jlim))
			return arlim[i][j];
	else 
		cout << "\nOut of range.\n";
}