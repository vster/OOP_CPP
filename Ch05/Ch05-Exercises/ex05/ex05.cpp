#include <iostream>
using namespace std;

long hms_to_sec(int hours, int minutes, int seconds);

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

long hms_to_sec(int hh, int mm, int ss)
{
	long ts = hh * 3600 + mm * 60 + ss;
	return ts; 
}