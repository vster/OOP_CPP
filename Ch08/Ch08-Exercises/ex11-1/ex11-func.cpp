#include <iostream>
using namespace std;
#include "ex11.h"

void sterling::decpnds()
{
	decpounds = (double) pounds + 
				(double) shillings / 20.0F +
				(double) pence / 240.0F;
}
void sterling::strlng ()
{
	double decfrac;
	pounds = (long) decpounds;
	decfrac = decpounds - pounds;
	shillings = (int) (decfrac * 20);
	pence = (int) ((decfrac * 20 - shillings) * 12);
}
void sterling::getSterling() 
{ 
	char dch;	
	cin >> dch >> pounds >> dch >> shillings >> dch >> pence; 
	decpnds();
}
void sterling::putSterling() const
{ 
	cout << "J" << pounds << "." << shillings << "." << pence; 
}
sterling sterling::operator + ( sterling s2 )
{
	sterling ts;
	decpnds();
	s2.decpnds();
	ts.decpounds = decpounds + s2.decpounds;
	ts.strlng();
	return ts;
}
sterling sterling::operator - ( sterling s2 )
{
	sterling ts;
	decpnds();
	s2.decpnds();
	ts.decpounds = decpounds - s2.decpounds;
	ts.strlng();
	return ts;
}
sterling sterling::operator * ( double n )
{
	sterling ts;
	decpnds();
	ts.decpounds = decpounds * n;
	ts.strlng();
	return ts;
}
sterling sterling::operator / ( double n )
{
	sterling ts;
	decpnds();
	ts.decpounds = decpounds / n;
	ts.strlng();
	return ts;
}
double sterling::operator / ( sterling s2 )
{
	double n;
	decpnds();
	s2.decpnds();
	n = decpounds / s2.decpounds;
	return n;
}	