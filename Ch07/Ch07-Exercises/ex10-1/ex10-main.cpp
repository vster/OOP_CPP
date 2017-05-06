#include <iostream>
#include <cstring>
using namespace std;
#include "ex10.h"


int main()
{
	matrix m1 ( 7, 5 );
	
	int temp = 123;
	m1.putel( 9, 2, temp );
	m1.putel( 2, 3, temp );
	
	temp = 0;
	temp = m1.getel( 9, 2 );
	temp = m1.getel( 2, 3 );

	return 0;
}

