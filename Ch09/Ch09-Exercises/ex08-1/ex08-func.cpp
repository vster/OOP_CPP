#include <iostream>
using namespace std;
#include <string.h>          // для функций str*
#include "ex08-func.h"

Pstring::Pstring( char s[])
{
	int j;
	if ( strlen(s) > SZ - 1 )
	{
		for ( j = 0; j < SZ - 1; j++ )
			str [j] = s [j];
		str[j] = '\0';
	}
	else
		strcpy_s ( str, s );
}

Pstring2 Pstring2::left ( Pstring2 s1, int n )
{
	int j;
	Pstring2 ts;
	for ( j = 0; j < n; j++ )
		str [j] = s1.str [j];
	str[j] = '\0';
	strcpy_s(ts.str, str);
	return ts;
}
Pstring2 Pstring2::mid ( Pstring2 s1, int s, int n )
{
	int j, i;
	Pstring2 ts;
	for ( i=0,j=s-1; j < s-1+n; j++)
		str[i++] = s1.str[j];
	str[i] = '\0';
	strcpy_s(ts.str, str);
	return ts;
}
Pstring2 Pstring2::right ( Pstring2 s1, int n)
{
	int j, i;
	int len = strlen(s1.str);
	Pstring2 ts;
	for ( i=0,j = len-n; j < len; j++)
		str[i++] = s1.str[j];
	str[i] = '\0';
	strcpy_s(ts.str, str);
	return ts;
}