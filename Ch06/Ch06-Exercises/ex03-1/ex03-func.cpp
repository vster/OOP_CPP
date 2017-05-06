#include <iostream>
#include <iomanip>
#include "ex03.h"
using namespace std;

time::time() : hrs(0), mins(), secs()
	{ }
time::time(int h, int m, int s) : hrs(h), mins(m), secs(s)
	{ }
void time::displaytime() const
{
	cout << setw(2) << hrs << ":"
	 << setfill('0') 
	 << setw(2) << mins << ":"
	 << setw(2) << secs;
}
void time::add_time(time tt1, time tt2)
{
	secs = tt1.secs + tt2.secs;
	if (secs >= 60)
	{
		secs -= 60;
		mins++;
	}
	mins += tt1.mins + tt2.mins;
	if (mins >= 60)
	{
		mins -= 60;
		hrs++;
	}
	hrs += tt1.hrs + tt2.hrs;
}