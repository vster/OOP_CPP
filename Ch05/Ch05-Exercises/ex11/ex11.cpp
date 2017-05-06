#include <iostream>
using namespace std;

struct sterling
{
	int pounds;
	int shillings;
	int pence;
};

sterling get_sterling( int );
sterling add_sterling( sterling, sterling );
void put_sterling( sterling );

int main()
{
	sterling s1, s2, s3;

	s1 = get_sterling( 1 );
	s2 = get_sterling( 2 );

	s3 = add_sterling( s1, s2 );
	
	cout << "The sums of ";
	put_sterling( s1 );
	cout << " and ";
	put_sterling( s2 );
	cout << " is ";
	put_sterling( s3 );
	cout << endl;

	return 0;
}

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