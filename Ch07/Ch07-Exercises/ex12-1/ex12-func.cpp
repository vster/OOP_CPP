#include <iostream>
#include <iomanip>
//#include <string.h>
#include <math.h>
#include <strstream>
#include "ex12.h"

using namespace std;

bMoney::bMoney ( )
	{}
bMoney::bMoney ( char s[] )
	{}

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