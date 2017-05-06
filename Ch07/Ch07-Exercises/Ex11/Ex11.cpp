#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>

using namespace std;

const int MAX = 80;

class money
{
	private:
		long double m;
		char str[MAX];
	public:
		money()
		{ m = 0.0;}
		const void putm()
		{ 
			cout << setiosflags ( ios::fixed )
				 << setiosflags ( ios::showpoint )
				 << setprecision ( 2 )
				 << setw ( 20 )
				 << m;
		}
		const void puts()
		{ cout << str; }
		void ldtoms(long double ldm);
		const void mstold(char s[]);
};

const void money::mstold(char s[])
{
	size_t j, i;
	for ( j = i = 0; j < (strlen(s)); j++)
		if ( isdigit(s[j]) || s[j] == '.')
			str[i++] = s[j];
	str[i] = '\0';
	m = atof(str);
}

void money::ldtoms(const long double ldm)
{
	const int MAX2 = 20;
	char ustring[MAX];
	unsigned int i, j;

	ostrstream s( ustring, MAX );

	m = ldm;		
	str[0] = '\0';
	if (m < 99999999999999990.00)
	{		
		s << setiosflags ( ios::fixed )
 		  << setiosflags ( ios::showpoint )
		  << setfill ('0')
		  << right
		  << setprecision ( 2 )
		  << setw ( MAX2 )
		  << m ;
		ustring[MAX2] = '\0';

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

int main ( )
{
	money m1;
	char ch;
	long double ldm1;

	do 
	{
		cout << "Enter sum: ";
		cin >> ldm1;

		m1.ldtoms(ldm1);
	
		cout << "You enter "; 
		m1.puts();
		cout << " dollars" << endl;
		
		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}