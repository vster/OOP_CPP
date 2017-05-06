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
		time operator - ( time );
		time operator ++ ( );
		time operator ++ ( int );
		time operator -- ( );
		time operator -- ( int );
		time operator * ( int );
		time operator / ( int );
		long time_to_sec ( )
		{
			long ts = hrs * 3600 + mins * 60 + secs;
			return ts;
		}
		time sec_to_time ( long ts  )
		{
			hrs  = ts / 3600;
			ts -= hrs * 3600;
			mins = ts / 60;
			secs = ts - mins * 60;
			return time ( hrs, mins, secs );
		}
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
	long ts = time_to_sec();
	long ts2 = tt2.time_to_sec();
	ts += ts2;
	tt.sec_to_time ( ts );
	return tt;
}

time time::operator - (time tt2) 
{
	time tt;
	long ts = time_to_sec();
	long ts2 = tt2.time_to_sec();
	ts -= ts2;
	tt.sec_to_time ( ts );
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

time time::operator * (int n) 
{
	time tt;
	long ts = time_to_sec();
	ts *= n;
	tt.sec_to_time ( ts );
	return tt;
}

time time::operator / (int n) 
{
	time tt;
	long ts = time_to_sec();
	ts /= n;
	tt.sec_to_time ( ts );
	return tt;
}

int main()
{
	time t1(20, 43, 59);
	time t2(10, 51, 25);
	time t3, t4, t5, t6;
	int n = 5;

	t3 = t1 + t2;
	t4 = t1 - t2;
	t5 = t1 * n;
	t6 = t1 / n;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();
	cout << "\nt4 = "; t4.displaytime();	
	cout << "\nt5 = "; t5.displaytime();
	cout << "\nt6 = "; t6.displaytime();

	return 0;
}
