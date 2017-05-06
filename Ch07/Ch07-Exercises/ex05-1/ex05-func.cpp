#include <iostream>
#include <cmath>
using namespace std;
#include "ex05.h"

fraction::fraction() : c(0), z(1)
	{}
void fraction::fget()
{ 
	char dummychar; cin >> c >> dummychar >> z; 
}
void fraction::fput() const
{ 
	cout << c << "/" << z; 
}
void fraction::fadd (const fraction f1, const fraction f2)
{ 
	c = f1.c * f2.z + f2.c * f1.z; z = f1.z * f2.z; 
}
void fraction::fsub (const fraction f1, const fraction f2)
{ 
	c = f1.c * f2.z - f2.c * f1.z; z = f1.z * f2.z; 
}
void fraction::fmul(const fraction f1, const fraction f2)
{ 
	c = f1.c * f2.c; z = f1.z * f2.z; 
}
void fraction::fdiv(const fraction f1, const fraction f2)
{ 
	c = f1.c * f2.z; z = f2.c * f1.z; 
}
void fraction::fdiv(const fraction f1, const int n)
{ 
	c = f1.c; z = f1.z * n; 
}
void fraction::fmake(int cin, int zin)
{ 
	c = cin; z = zin; 
}
void fraction::lowterms()
{
	long tnum, tden, temp, gcd;
	tnum = labs(c);
	tden = labs(z);
	if( tden == 0 )
	{ cout << "Incorrect divider!"; exit(1); }
	else if( tnum == 0 )
	{ c = 0; z = 1; return; }
	while( tnum != 0 )
	{
		if( tnum < tden )
		{ temp = tnum; tnum = tden; tden = temp; }
		tnum -= tden;
	}
	gcd = tden;
	c /= gcd;
	z /= gcd;
}
