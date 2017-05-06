// times2.cpp
// �������������� ������� � �������������� ������������
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
class time24
{
	private:
		int hours;
		int minutes;
		int seconds;
	public:
		time24 ( ) : hours ( 0 ), minutes ( 0 ), seconds ( 0 )
		{ }
		time24 ( int h, int m, int s ) : hours ( h ), minutes ( m ), seconds ( s )
		{ }
		void display ( ) const
		{
			if ( hours < 10 ) cout << '0';
			cout << hours << ':';
			if ( minutes < 10 ) cout << '0';
			cout << minutes << ':';
			if ( seconds < 10 ) cout << '0';
			cout << seconds;
		}
		int getHrs ( ) const;
		int getMins ( ) const;
		int getSecs ( ) const;
};
int time24::getHrs() const
{
	return hours;
}

int time24::getMins() const
{
	return minutes;
}
int time24::getSecs() const
{
	return seconds;
}
///////////////////////////////////////////////////////////
class time12
{
	private:
		bool pm;
		int hrs;
		int mins;
	public:
		time12 ( ) : pm ( true ), hrs ( 0 ), mins ( 0 )
		{ }
		time12 ( time24 );
		time12 ( bool ap, int h, int m ) : pm ( ap ), hrs ( h ), mins ( m )
		{ }
		void display ( ) const
		{
			cout << hrs << ':';
			if ( mins < 10 ) cout << '0';
			cout << mins << ' ';
			string am_pm = pm ? "p.m." : "a.m.";
			cout << am_pm;
		}
};
///////////////////////////////////////////////////////////
time12::time12 ( time24 t24 )
{
	int hrs24 = t24.getHrs ( );

	pm = t24.getHrs ( ) < 12 ? false : true;

	mins = ( t24.getSecs ( ) < 30 ) ? t24.getMins ( ) : t24.getMins ( ) + 1;
	if ( mins == 60 )
	{
		mins = 0;
		++hrs24;
		if ( hrs24 == 12 || hrs24 == 24 )
			pm = ( pm == true ) ? false : true;
	}
	hrs = ( hrs24 < 13 ) ? hrs24 : hrs24 - 12;
	if ( hrs == 0 )
		{ hrs = 12; pm = false; }
}
///////////////////////////////////////////////////////////
int main ( )
{
	int h, m, s;

	while ( true )
	{
		cout << "Enter time in 24-hour format: \n";
		cout << "  Hours (from 0 till 23): "; cin >> h;
		if ( h > 23 )
			return ( 1 );
		cout << "  Minutes: "; cin >> m;
		cout << "  Seconds: "; cin >> s;

    time24 t24 ( h, m, s );
    cout << "Initial time: ";
    t24.display ( );

    time12 t12 = t24;
    cout << "\nIn 12-hour format: ";
    t12.display ( );
    cout << "\n\n";
  }
  return 0;
}


