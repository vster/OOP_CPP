#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	time t1;
	char dummychar;

	cout << "Enter time in format hh:mm:ss ";
	cin >> t1.hours >> dummychar 
		>> t1.minutes >> dummychar 
		>> t1.seconds;

	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

	cout << "Total - " << totalsecs << " sec" << endl;

	return 0;
}