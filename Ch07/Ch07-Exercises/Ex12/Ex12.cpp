#include <iostream>
#include <iomanip>
//#include <string.h>
#include <math.h>
#include <strstream>

using namespace std;

const int MAX = 80;

class bMoney
{
private:
	long double money;
public:
	bMoney ( )
		{};
	bMoney ( char s[] )
		{};
	void madd ( bMoney m1, bMoney m2 );
	const void getMoney ( );
	const void putMoney ( );
};

const void bMoney::getMoney()
{
	unsigned int j, i;
	char s[MAX], str[MAX];

	cin >> s;
	for ( j = i = 0; j < (strlen(s)); j++)
		if ( isdigit(s[j]) || s[j] == '.')
			str[i++] = s[j];
	str[i] = '\0';
	money = atof(str);
}

const void bMoney::putMoney()
{
	const int LBUF = 20;
	char ustring[MAX], str[MAX];
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
		cout << str;
	}
}

void bMoney::madd(bMoney m1, bMoney m2)
{
	money = m1.money + m2.money;
}

int main ( )
{
	bMoney m1, m2, m3 ;
	char ch;

	do 
	{
		cout << "Enter 1st sum in $: ";
		m1.getMoney();

		cout << "Enter 2nd sum in $: ";
		m2.getMoney();

		m3.madd( m1, m2 );

		cout << "Sum is "; 
		m3.putMoney();
		cout << endl;

		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}