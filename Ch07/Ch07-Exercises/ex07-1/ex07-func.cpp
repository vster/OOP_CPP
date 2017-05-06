#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include "ex07.h"

using namespace std;

money::money()
{ m = 0.0;}
const void money::putm()
{ 		
	cout << setw ( 10 ) << setiosflags ( ios::fixed )
		 << setiosflags ( ios::showpoint ) << setprecision ( 2 )
		 << m;
 }
const void money::mstold(char s[])
{
	unsigned int j, i;
	for ( j = i = 0; j < (strlen(s)); j++)
		if ( isdigit(s[j]) || s[j] == '.')
			str[i++] = s[j];
	str[i] = '\0';
	m = atof(str);
}
