#include <iostream>
#include <cstring>
#include "ex08.h"
using namespace std;


int main()
{
	safearay sa1;

	int temp = 123;
	
	sa1.putel(7, temp);
	sa1.putel(120, temp);

	temp = 0;
	temp = sa1.getel(7);
	temp = sa1.getel(130);

	return 0;
}