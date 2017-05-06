#include <iostream>
#include "ex09.h"
using namespace std;


int main()
{
	time t[2];

	for (int i = 0; i < 2; i++)
		t[i] = gettime(i);
		
	cout << "Times are ";
	puttime(t[0]);
	cout << " and ";
	puttime(t[1]);
	cout << endl;
	
	swap( t[0], t[1] );

	cout << "Times are ";
	puttime(t[0]);
	cout << " and ";
	puttime(t[1]);
	cout << endl;
	
	return 0;
}
