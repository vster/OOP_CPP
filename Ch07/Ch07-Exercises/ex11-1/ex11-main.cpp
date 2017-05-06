#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include "ex11.h"

using namespace std;

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