#include <iostream>
#include "ex11.h"
using namespace std;

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
