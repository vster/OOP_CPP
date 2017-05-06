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
		void correct ( );		
		time operator + ( time );	
		time operator ++ ( );
		time operator ++ ( int );
		time operator -- ( );
		time operator -- ( int );
};

void time::correct ( )
{
	if ( secs >= 60 )	{ secs -= 60; ++mins; }	
	if ( mins >= 60 )	{ mins -= 60; ++hrs; }		
	if ( secs < 0 )		{ secs += 60; --mins; }	
	if ( mins < 0 )		{ mins += 60; --hrs; } 
}

time time::operator + (time tt2) 
{
	time tt;
	tt.secs = secs + tt2.secs;
	tt.mins = mins + tt2.mins;
	tt.hrs = hrs + tt2.hrs;
	tt.correct();
	return tt;
}

time time::operator ++ ( )
{
	++secs;
	correct();
	return time ( hrs, mins, secs) ;
}

time time::operator ++ ( int )
{
	time tt (hrs, mins, secs);
	secs++;
	correct();
	return tt;
}
time time::operator -- ( )
{
	--secs;
	correct();
	return time ( hrs, mins, secs) ;
}
time time::operator -- ( int )
{
	time tt (hrs, mins, secs);
	secs--;
	correct();
	return tt;
}

int main()
{
	time t1(10, 43, 59);
	time t2(20, 35, 25);
	time t3, t4;
	
	t3 = t1 + t2;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	++t1;
	cout << "\nt1 = "; t1.displaytime();
	++t2;
	cout << "\nt2 = "; t2.displaytime();
	
	--t1;
	cout << "\nt1 = "; t1.displaytime();
	--t2;
	cout << "\nt2 = "; t2.displaytime();

	t4 = t1++;
	cout << "\nt1 = "; t4.displaytime();
	t4 = t2++;
	cout << "\nt1 = "; t4.displaytime();

	t4 = t1--;
	cout << "\nt1 = "; t4.displaytime();
	t4 = t2--;
	cout << "\nt1 = "; t4.displaytime();

	return 0;
}
