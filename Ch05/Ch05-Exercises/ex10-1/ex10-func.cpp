#include <iostream>
#include "ex10.h"
using namespace std;

void calcout(void)
{
	static int count = 1;
	cout << "Calling number " << count << endl; 
	count++;
}