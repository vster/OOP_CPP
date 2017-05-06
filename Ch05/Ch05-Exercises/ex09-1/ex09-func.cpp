#include <iostream>
#include "ex09.h"
using namespace std;

// Input time in format hh:mm:ss
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

#include <iomanip>
// Output time in format hh:mm:ss
void puttime(time tt)
{
	cout << setw(2) << tt.hours << ":"
		 << setfill('0') 
		 << setw(2) << tt.minutes << ":"
		 << setw(2) << tt.seconds;
}


void swap(time& tt1, time& tt2)
{
	time tempt;

	tempt = tt1;
	tt1 = tt2;
	tt2 = tempt;
}