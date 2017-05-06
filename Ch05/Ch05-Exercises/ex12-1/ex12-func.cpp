#include <iostream>
#include "ex12.h"
using namespace std;


fraction fadd( fraction f1, fraction f2 )
{
	fraction f3;

	f3.c = f1.c * f2.z + f2.c * f1.z;
	f3.z = f1.z * f2.z;

	return f3;
}

fraction fsub( fraction f1, fraction f2 )
{
	fraction f3;

	f3.c = f1.c * f2.z - f2.c * f1.z;
	f3.z = f1.z * f2.z;				

	return f3;
}

fraction fmul( fraction f1, fraction f2 )
{
	fraction f3;

	f3.c = f1.c * f2.c;
	f3.z = f1.z * f2.z;

	return f3;
}

fraction fdiv( fraction f1, fraction f2 )
{
	fraction f3;

	f3.c = f1.c * f2.z;
	f3.z = f2.c * f1.z;								

	return f3;
}