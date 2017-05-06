#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include "ex07.h"

using namespace std;


int main ( )
{
	char s1[MAX];
	money m1;
	char ch;

	do 
	{
		cout << "Enter sum in $: ";
		cin >> s1;

		m1.mstold(s1);
	
		cout << "You enter "; m1.putm();
		cout << " dollars" << endl;
		
		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}