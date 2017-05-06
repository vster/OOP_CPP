#include <iostream>
#include <cmath>
using namespace std;
#include "ex07.h"

fraction fraction::operator + ( fraction f2 )
{ 
	fraction tf;
	tf.c = c * f2.z + f2.c * z; 
	tf.z = z * f2.z; 
	return tf;	
}
fraction fraction::operator - ( fraction f2 )
{
	fraction tf;
	tf.c = c * f2.z - f2.c * z; 
	tf.z = z * f2.z; 
	return tf;	
}
fraction fraction::operator * ( fraction f2 )
{
	fraction tf;
	tf.c = c * f2.c; 
	tf.z = z * f2.z;
	return tf;	
}
fraction fraction::operator / ( fraction f2 )
{
	fraction tf;
	tf.c = c * f2.z; 
	tf.z = f2.c * z;
	return tf;	
}
bool fraction::operator == ( fraction f2 )
{
	if ((c == f2.c ) && (z == f2.z))
		return 1;
	else 
		return 0;
}
bool fraction::operator != ( fraction f2 )
{
	if ((c != f2.c ) || (z != f2.z))
		return 1;
	else 
		return 0;
}

fraction fraction::lowterms( fraction tf )
{
	long tnum, tden, temp, gcd;
	tnum = labs(tf.c);
	tden = labs(tf.z);
	if( tden == 0 )
	{ cout << "Incorrect divider!"; exit(1); }
	else if( tnum == 0 )
	{ tf.c = 0; tf.z = 1; return tf; }
	while( tnum != 0 )
	{
		if( tnum < tden )
		{ temp = tnum; tnum = tden; tden = temp; }
		tnum -= tden;
	}
	gcd = tden;
	tf.c /= gcd;
	tf.z /= gcd;
	return tf;
}

