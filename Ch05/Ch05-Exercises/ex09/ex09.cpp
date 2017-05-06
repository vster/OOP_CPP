#include <iostream>
using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

void swap( time&, time& );
time gettime(int);
void puttime(time);

int main()
{
	time t[2];

	for (int i = 0; i < 2; i++)
		t[i] = gettime(i);
		
	cout << "Times are ";
	puttime(t[0]);
	cout << " and ";
	puttime(t[1]);
	cout << endl;
	
	swap( t[0], t[1] );

	cout << "Times are ";
	puttime(t[0]);
	cout << " and ";
	puttime(t[1]);
	cout << endl;
	
	return 0;
}

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