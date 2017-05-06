#include <iostream>
#include "ex12-func.h"
using namespace std;

void fraction::fget()
{ 
	char dummychar; 
	cin >> c >> dummychar >> z; 
	simplfrac();
}
void fraction::fput() const
{ 
	cout << c << "/" << z; 
}
int fraction::intput()
{
	simplfrac();
	return (int)(c/z);
}
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
void fraction::simplfrac()
{
	long tnum, tden, temp, gcd;
	tnum = labs(c);
	tden = labs(z);
	if( tden == 0 )
		{ cout << "Incorrect divider!"; exit(1); }
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

void sterling::to_dec()
{
	decpounds = (double) pounds + 
				(double) shillings / 20.0F +
				(double) pence / 240.0F;
}
void sterling::to_ster ()
{
	double decfrac;
	pounds = (long) decpounds;
	decfrac = decpounds - pounds;
	shillings = (int) (decfrac * 20);
	pence = (int) ((decfrac * 20 - shillings) * 12);
}
void sterling::getsterling() 
{ 
	char dch;	
	cin >> dch >> pounds >> dch >> shillings >> dch >> pence; 
	to_dec();
}
void sterling::putsterling() const
{ 
	cout << "J" << pounds << "." << shillings << "." << pence; 
}
sterling sterling::operator + ( sterling s2 )
{
	sterling ts;
	to_dec();
	s2.to_dec();
	ts.decpounds = decpounds + s2.decpounds;
	ts.to_ster();
	return ts;
}
sterling sterling::operator - ( sterling s2 )
{
	sterling ts;
	to_dec();
	s2.to_dec();
	ts.decpounds = decpounds - s2.decpounds;
	ts.to_ster();
	return ts;
}
sterling sterling::operator * ( double n )
{
	sterling ts;
	to_dec();
	ts.decpounds = decpounds * n;
	ts.to_ster();
	return ts;
}
sterling sterling::operator / ( double n )
{
	sterling ts;
	to_dec();
	ts.decpounds = decpounds / n;
	ts.to_ster();
	return ts;
}
double sterling::operator / ( sterling s2 )
{
	double n;
	to_dec();
	s2.to_dec();
	n = decpounds / s2.decpounds;
	return n;
}	

void sterfrac::to_dec()
{
	sterling::to_dec();
	decpounds += (double) eighths/1920.0F;
}
void sterfrac::to_ster()
{
	sterling::to_ster();
	eighths =  (int)((decpounds - 
				((double) pounds + 
				(double) shillings / 20.0F +
				(double) pence / 240.0F )) * 1920.0F);
}
void sterfrac::getsterling()
{
	char dch;
	fraction f1, tf;
	sterling::getsterling();
	cin >> dch;
	f1.fget();
	tf = f1 * fraction(8,1);
	eighths = tf.intput();
	to_dec();
}
void sterfrac::putsterling() const
{
	fraction tf(eighths,8);
	sterling::putsterling();
	cout << '-';
	tf.fput();
}
sterfrac sterfrac::operator + ( sterfrac s2 )
{
	sterfrac ts;
	to_dec();
	s2.to_dec();
	ts.decpounds = decpounds + s2.decpounds;
	ts.to_ster();
	return ts;
}
sterfrac sterfrac::operator - ( sterfrac s2 )
{
	sterfrac ts;
	to_dec();
	s2.to_dec();
	ts.decpounds = decpounds - s2.decpounds;
	if (ts.decpounds < 0)
		ts.decpounds = -ts.decpounds;
	ts.to_ster();
	return ts;
}
sterfrac sterfrac::operator * ( double n )
{
	sterfrac ts;
	to_dec();
	ts.decpounds = decpounds * n;
	ts.to_ster();
	return ts;
}
sterfrac sterfrac::operator / ( double n )
{
	sterfrac ts;
	to_dec();
	ts.decpounds = decpounds / n;
	ts.to_ster();
	return ts;
}
double sterfrac::operator / ( sterfrac s2 )
{
	double n;
	to_dec();
	s2.to_dec();
	n = decpounds / s2.decpounds;
	return n;
}	