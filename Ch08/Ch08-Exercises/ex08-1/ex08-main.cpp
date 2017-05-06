#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include <cstring>
#include "ex08.h"

using namespace std;

int main ( )
{
	bMoney m1, m2, m3 ;
	char ch;
	long double num, n3;

	do 
	{
		cout << "Enter 1st value in $: ";
		m1.getMoney();

		cout << "Enter 2nd value in $: ";
		m2.getMoney();
	
 		cout << "Enter number: ";
		cin >> num;


		m3 = m1 + m2;

		cout << "Sum is "; 
		m3.putMoney();
		cout << endl;

		m3 = m1 - m2;

		cout << "Substruction is "; 
		m3.putMoney();
		cout << endl;

		m3 = m1 * num;
			
		cout << "Multiplication is "; 
		m3.putMoney();
		cout << endl;
		
		n3 = m1 / m2;
			
		cout << "Amount is " 
			 << setiosflags ( ios::fixed ) 
			 << setprecision ( 2 )
			 << n3; 
		cout << endl;
		
		m3 = m1 / num;
			
		cout << "Division is "; 
		m3.putMoney();
		cout << endl;


		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}