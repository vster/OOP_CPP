#include <iostream>
#include "ex06.h"
using namespace std;

int main()
{
	time t[3];
	long totsecs[3];
		
	for (int i = 0; i < 2; i++)
	{
		t[i] = gettime(i);
		totsecs[i] = time_to_secs(t[i]);
	}

	totsecs[2] = totsecs[0] + totsecs[1];

	t[2] = secs_to_time(totsecs[2]);

	cout << "Summary of 2 times is " << t[2].hours << ":" 
		<< t[2].minutes << ":" << t[2].seconds << endl;

	return 0;
}
