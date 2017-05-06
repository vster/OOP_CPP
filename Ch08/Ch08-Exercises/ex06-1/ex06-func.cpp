#include <iostream>
#include <iomanip>
using namespace std;
#include "ex06.h"

void time::displaytime() const
{
	cout << setw(2) << hrs << ":"
		 << setfill('0') 
		 << setw(2) << mins << ":"
		 << setw(2) << secs;
}


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
	long ts = time_to_sec();
	long ts2 = tt2.time_to_sec();
	ts += ts2;
	tt.sec_to_time ( ts );
	return tt;
}

time time::operator - (time tt2) 
{
	time tt;
	long ts = time_to_sec();
	long ts2 = tt2.time_to_sec();
	ts -= ts2;
	tt.sec_to_time ( ts );
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

time time::operator * (int n) 
{
	time tt;
	long ts = time_to_sec();
	ts *= n;
	tt.sec_to_time ( ts );
	return tt;
}

time time::operator / (int n) 
{
	time tt;
	long ts = time_to_sec();
	ts /= n;
	tt.sec_to_time ( ts );
	return tt;
}
long time::time_to_sec ( )
{
	long ts = hrs * 3600 + mins * 60 + secs;
	return ts;
}
time time::sec_to_time ( long ts  )
{
	hrs  = ts / 3600;
	ts -= hrs * 3600;
	mins = ts / 60;
	secs = ts - mins * 60;
	return time ( hrs, mins, secs );
}