#include <iostream>
#include <iomanip>
using namespace std;

class time
{
	private:
		int hrs;
		int mins;
		int secs;
	public:
		time() : hrs(0), mins(), secs()
			{ }
		time(int h, int m, int s) : hrs(h), mins(m), secs(s)
			{ }
		void displaytime() const
		{
		cout << setw(2) << hrs << ":"
		 << setfill('0') 
		 << setw(2) << mins << ":"
		 << setw(2) << secs;
		}
		time operator + ( time ) const;	
};

time time::operator + (time tt2) const
{
	int h, m, s;
	s = secs + tt2.secs;
	m = mins + tt2.mins;
	h = hrs + tt2.hrs;
	if ( s >= 60 )
	{ s -= 60; 	m++; }	
	if ( m >= 60 )
	{ m -= 60; h++; }		
	return time ( h, m, s );
}

int main()
{
	const time t1(10, 43, 50);
	const time t2(20, 35, 25);
	time t3;
	
	t3 = t1 + t2;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	return 0;
}
