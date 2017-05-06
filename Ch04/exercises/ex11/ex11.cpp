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
	time t1, t2, t3;
	long totsecs1, totsecs2, totsecs3;
	char dummychar;

	cout << "Enter time 1 in format hh:mm:ss ";
	cin >> t1.hours >> dummychar 
		>> t1.minutes >> dummychar 
		>> t1.seconds;

	cout << "Enter time 2 in format hh:mm:ss ";
	cin >> t2.hours >> dummychar 
		>> t2.minutes >> dummychar 
		>> t2.seconds;

	totsecs1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	totsecs2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

	totsecs3 = totsecs1 + totsecs2;

	t3.hours = (int) (totsecs3 / 3600);
	totsecs3 -= t3.hours * 3600;
	t3.minutes = (int) ( totsecs3 / 60 );
	t3.seconds = totsecs3 - t3.minutes * 60;
	

	cout << "Summary of times t1+t2 is " << t3.hours << ":" 
		<< t3.minutes << ":" << t3.seconds << endl;

	return 0;
}


