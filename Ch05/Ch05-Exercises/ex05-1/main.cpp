#include <iostream>
#include "ex05.h"
using namespace std;


int main()
{
	char dummychar, ch;

	int hours;
	int minutes;
	int seconds;
	long totalsecs;

	do {
		cout << "Enter time in format hh:mm:ss ";
		cin >> hours >> dummychar 
			>> minutes >> dummychar 
			>> seconds;

		totalsecs = hms_to_sec(hours, minutes, seconds);

		cout << "Total - " << totalsecs << " sec" << endl;
		cout << "Continue (y/n)? "; 
		cin >> ch;
	} while (ch != 'n');

	return 0;
}
