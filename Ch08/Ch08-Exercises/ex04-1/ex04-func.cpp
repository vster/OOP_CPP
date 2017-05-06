#include <iostream>
using namespace std;
#include "ex04.h"

Int Int::operator + ( Int i2 ) 
{
	long double ii;
	ii = long double(i) + long double (i2.i);
	return ( checkit ( ii ) );
}
Int Int::operator - ( Int i2 ) 
{
	long double ii;
	ii = long double(i) - long double (i2.i);
	return ( checkit ( ii ) );
}
Int Int::operator * ( Int i2 ) 
{
	long double ii;
	ii = long double(i) * long double (i2.i);
	return ( checkit ( ii ) );
}
Int Int::operator / ( Int i2 ) 
{
	long double ii;
	ii = long double(i) / long double (i2.i);
	return ( checkit ( ii ) );
}
Int Int::checkit (long double answer )
{
	if ( ( answer > 2147483647.0L ) ||
		 ( answer < -2147483647.0L ) )
	{ 
		cout << "\nOverload error.\n"; 
		exit(1); 
	}
	return Int (int (answer) );
}
