#include <iostream>
#include <iomanip>
using namespace std;
#include "ex05.h"

void time::correct ( )
{
	if ( secs >= 60 )	{ secs -= 60; ++mins; }	
	if ( mins >= 60 )	{ mins -= 60; ++hrs; }		
	if ( secs < 0 )		{ secs += 60; --mins; }	
	if ( mins < 0 )		{ mins += 60; --hrs; } 
}

time time::operator + (time tt2) 
{
	time tt;
	tt.secs = secs + tt2.secs;
	tt.mins = mins + tt2.mins;
	tt.hrs = hrs + tt2.hrs;
	tt.correct();
	return tt;
}

time time::operator ++ ( )
{
	++secs;
	correct();
	return time ( hrs, mins, secs) ;
}

time time::operator ++ ( int )
{
	time tt (hrs, mins, secs);
	secs++;
	correct();
	return tt;
}
time time::operator -- ( )
{
	--secs;
	correct();
	return time ( hrs, mins, secs) ;
}
time time::operator -- ( int )
{
	time tt (hrs, mins, secs);
	secs--;
	correct();
	return tt;
}
