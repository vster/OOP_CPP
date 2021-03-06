#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include <cstring>

using namespace std;

const int MAX = 80;

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
	void mstold ( );
	void ldtoms ( );
	const void getMoney ( );
	const void putMoney ( );
	bMoney operator + ( bMoney);
	bMoney operator - ( bMoney);
	bMoney operator * ( long double );
	long double operator / ( bMoney );
	bMoney operator / ( long double );
	friend istream& operator >> (istream& is, bMoney& bm);
	friend ostream& operator << (ostream& os, bMoney& bm);
	friend bMoney operator * (long double n, bMoney m2);
	friend long double operator / (long double n, bMoney m2);
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
bMoney operator * (long double n, bMoney m2)
{
	bMoney tm;
	tm.money = n * m2.money;
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
long double operator / (long double n, bMoney m2)
{
	long double n2;
	n2 = n / m2.money;
	return n2;
}
istream& operator >> (istream& is, bMoney& bm)
{
	is >> bm.str;
	bm.mstold( );
	return is;
}
ostream& operator << (ostream& os, bMoney& bm)
{
	bm.ldtoms( );
	os << bm.str;
	return os;
}

int main ( )
{
	bMoney m1, m2, m3 ;
	char ch;
	long double num, n3;

	do 
	{
		cout << "Enter 1st value in $: ";
		cin >> m1;

		cout << "Enter 2nd value in $: ";
		cin >> m2;
	
 		cout << "Enter number: ";
		cin >> num;


		m3 = m1 + m2;

		cout << "Sum is " << m3 << endl;
		
		m3 = m1 - m2;

		cout << "Substruction is " << m3 << endl;

		m3 = m1 * num;
			
		cout << "Multiplication is " << m3 << endl;
		
		m3 = num * m1;
			
		cout << "Friend Multiplication is " << m3 << endl;

		n3 = m1 / m2;
			
		cout << "Amount is " 
			 << setiosflags ( ios::fixed ) 
			 << setprecision ( 2 )
			 << n3; 
		cout << endl;
		
		m3 = m1 / num;
			
		cout << "Division is " << m3 << endl;

		n3 = num / m1;
			
		cout << "Friend Division is " 
			 << setiosflags ( ios::fixed ) 
			 << setprecision ( 2 )
			 << n3; 
		cout << endl;

		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}