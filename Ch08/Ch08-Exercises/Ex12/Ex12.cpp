#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include <cstring>

using namespace std;

const int MAX = 80;


class sterling
{
private:
	long pounds;
	int shillings;
	int pence;
	double decpounds;
public:
	sterling()
	{}
	sterling(long p, int s, int pnc ) : pounds(p), shillings(s), pence(pnc)
	{}
	sterling ( double dp ) : decpounds ( dp )
	{ strlng(); }
	void decpnds()
	{
		decpounds = (double) pounds + 
					(double) shillings / 20.0F +
					(double) pence / 240.0F;
	}
	void strlng ()
	{
		double decfrac;
		pounds = (long) decpounds;
		decfrac = decpounds - pounds;
		shillings = (int) (decfrac * 20);
		pence = (int) ((decfrac * 20 - shillings) * 12);
	}
	void getSterling() 
	{ 
		char dch;	
		cin >> dch >> pounds >> dch >> shillings >> dch >> pence; 
		decpnds();
	}
	void putSterling() const
	{ 
		cout << "J" << pounds << "." << shillings << "." << pence; 
	}
	sterling operator + ( sterling s2 )
	{
		sterling ts;
		decpnds();
		s2.decpnds();
		ts.decpounds = decpounds + s2.decpounds;
		ts.strlng();
		return ts;
	}
	sterling operator - ( sterling s2 )
	{
		sterling ts;
		decpnds();
		s2.decpnds();
		ts.decpounds = decpounds - s2.decpounds;
		ts.strlng();
		return ts;
	}
	sterling operator * ( double n )
	{
		sterling ts;
		decpnds();
		ts.decpounds = decpounds * n;
		ts.strlng();
		return ts;
	}
	sterling operator / ( double n )
	{
		sterling ts;
		decpnds();
		ts.decpounds = decpounds / n;
		ts.strlng();
		return ts;
	}
	double operator / ( sterling s2 )
	{
		double n;
		decpnds();
		s2.decpnds();
		n = decpounds / s2.decpounds;
		return n;
	}	
	operator double ( )
	{
		decpnds();
		return decpounds;
	}
};

class bMoney
{
private:
	long double money;
	char str[MAX];
public:
	bMoney ( )
	{};
	bMoney ( char s[] ) 
	{};
	bMoney ( long double m ) : money(m)
	{};
	void mstold ( );
	void ldtoms ( );
	const void getMoney ( );
	const void putMoney ( );
	bMoney operator + ( bMoney);
	bMoney operator - ( bMoney);
	bMoney operator * ( long double );
	long double operator / ( bMoney );
	bMoney operator / ( long double );
	operator double ()
	{
		return money;
	}
};
const void bMoney::getMoney ( )
{
	cin >> str;
	mstold ( );
}

const void bMoney::putMoney ( )
{
	ldtoms ( );
	cout << str;
}

void bMoney::mstold ( )
{
	unsigned int j, i;
	char s[MAX];
	
	for ( j = i = 0; j < (strlen(str)); j++)
		if ( isdigit(str[j]) || str[j] == '.')
			s[i++] = str[j];
	s[i] = '\0';
	money = atof(s);
}

void bMoney::ldtoms ( )
{
	const int LBUF = 20;
	char ustring[MAX];
	unsigned int i, j;

	ostrstream s( ustring, MAX );

	if (money < 99999999999999990.00)
	{		
		s << setiosflags ( ios::fixed )
 		  << setiosflags ( ios::showpoint )
		  << setfill ('0')
		  << right
		  << setprecision ( 2 )
		  << setw ( LBUF )
		  << money ;
		ustring[ LBUF ] = '\0';

		for ( i  = 0 ; ustring[i] == '0'; i++);
		
		str[0] = '$';
		
		for ( j = 1; ustring[i] != '\0'; i++ )
		{
			str[ j++ ] = ustring [ i ];
			if ( (((i-1) % 3) == 0) && (i < 15))
				str [j++] = ',';
		}
		str [j] = '\0';
	}
}

bMoney bMoney::operator + ( bMoney m2)
{
	bMoney tm;
	tm.money = money + m2.money;
	return tm;
}

bMoney bMoney::operator - ( bMoney m2)
{
	bMoney tm;
	tm.money = money - m2.money;
	return tm;
}

bMoney bMoney::operator * ( long double n )
{
	bMoney tm;
	tm.money = money * n;
	return tm;
}
long double bMoney::operator / ( bMoney m2 )
{
	long double n;
	n = money / m2.money;
	return n;
}
bMoney bMoney::operator / ( long double n )
{
	bMoney tm;
	tm.money = money / n;
	return tm;
}



int main()
{
	double kurs_p_d = 50;
	bMoney m1, m2;
	sterling s1, s2;
	
	cout << "Enter sum in dollars: ";
	m1.getMoney();
	
	cout << "Sum in dollars ";
	m1.putMoney();
	cout << endl;
		
	s1 = static_cast<double>( m1 ) / kurs_p_d;
	
	cout << "Sum in sterling ";
	s1.putSterling();
	cout << endl;

	cout << "Enter sum in sterling: ";
	s2.getSterling();
	
	cout << "Sum in sterling ";
	s2.putSterling();
	cout << endl;
		
	m2 = static_cast<double>( s2 ) * kurs_p_d;
	
	cout << "Sum in dollars ";
	m2.putMoney();


	return 0;
}