#include <iostream>
#include <iomanip>
//#include <string.h>
#include <math.h>
#include <strstream>
#include "ex12.h"

using namespace std;

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