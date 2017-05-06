#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

long time_to_secs(time);
time secs_to_time(long);
time gettime(int);

int main()
{
	time t[3];
	long totsecs[3];
		
	for (int i = 0; i < 2; i++)
	{
		t[i] = gettime(i);
		totsecs[i] = time_to_secs(t[i]);
	}

	totsecs[2] = totsecs[0] + totsecs[1];

	t[2] = secs_to_time(totsecs[2]);

	cout << "Summary of 2 times is " << t[2].hours << ":" 
		<< t[2].minutes << ":" << t[2].seconds << endl;

	return 0;
}

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
