#include <iostream>
#include "ex11.h"
using namespace std;


sterling get_sterling( int n )
{
	sterling ss;
	char dummychar;

	cout << "Enter sum number " << n << " in format Jx.x.x: ";
	cin >> dummychar >> ss.pounds 
		>> dummychar >> ss.shillings
		>> dummychar >> ss.pence;
	return ss;
}

void put_sterling( sterling ss )
{
	cout << "J" << ss.pounds 
		 << "." << ss.shillings 
		 << "." << ss.pence;
}

sterling add_sterling( sterling ss1, sterling ss2)
{
	sterling ss3;
	
	ss3.pounds = ss1.pounds + ss2.pounds;
	ss3.shillings = ss1.shillings + ss2.shillings;
	ss3.pence = ss1.pence + ss2.pence;
	if (ss3.pence > 11)
	{
		ss3.shillings++;
		ss3.pence -= 12;
	}
	if (ss3.shillings > 19)
	{
		ss3.pounds++;
		ss3.shillings -= 20;
	}
	return ss3;
}