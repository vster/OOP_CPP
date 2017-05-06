#include <iostream>
#include "ex06.h"
using namespace std;

time gettime(int n)
{
	char dummychar;
	time tt;

	cout << "Enter time " << n+1 << " in format hh:mm:ss ";
	cin >> tt.hours >> dummychar 
		>> tt.minutes >> dummychar 
		>> tt.seconds;
	return tt;
}

long time_to_secs(time tt)
{
	long ts = tt.hours * 3600 + tt.minutes * 60 + tt.seconds;
	return ts;
}

time secs_to_time(long totsecs)
{
	time tt;

	tt.hours = (int) (totsecs / 3600);
	totsecs -= tt.hours * 3600;
	tt.minutes = (int) ( totsecs / 60 );
	tt.seconds = totsecs - tt.minutes * 60;
	
	return tt;
}