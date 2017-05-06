#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include <cstring>
#include "ex12.h"

using namespace std;

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

const void bMoney::getMoney ( )
{
	cin >> str;
	mstold ( );
}

const void bMoney::putMoney ( )
{
	ldtoms ( );
	cout << str;
}

void bMoney::mstold ( )
{
	unsigned int j, i;
	char s[MAX];
	
	for ( j = i = 0; j < (strlen(str)); j++)
		if ( isdigit(str[j]) || str[j] == '.')
			s[i++] = str[j];
	s[i] = '\0';
	money = atof(s);
}

void bMoney::ldtoms ( )
{
	const int LBUF = 20;
	char ustring[MAX];
	unsigned int i, j;

	ostrstream s( ustring, MAX );

	if (money < 99999999999999990.00)
	{		
		s << setiosflags ( ios::fixed )
 		  << setiosflags ( ios::showpoint )
		  << setfill ('0')
		  << right
		  << setprecision ( 2 )
		  << setw ( LBUF )
		  << money ;
		ustring[ LBUF ] = '\0';

		for ( i  = 0 ; ustring[i] == '0'; i++);
		
		str[0] = '$';
		
		for ( j = 1; ustring[i] != '\0'; i++ )
		{
			str[ j++ ] = ustring [ i ];
			if ( (((i-1) % 3) == 0) && (i < 15))
				str [j++] = ',';
		}
		str [j] = '\0';
	}
}

bMoney bMoney::operator + ( bMoney m2)
{
	bMoney tm;
	tm.money = money + m2.money;
	return tm;
}

bMoney bMoney::operator - ( bMoney m2)
{
	bMoney tm;
	tm.money = money - m2.money;
	return tm;
}

bMoney bMoney::operator * ( long double n )
{
	bMoney tm;
	tm.money = money * n;
	return tm;
}
long double bMoney::operator / ( bMoney m2 )
{
	long double n;
	n = money / m2.money;
	return n;
}
bMoney bMoney::operator / ( long double n )
{
	bMoney tm;
	tm.money = money / n;
	return tm;
}



