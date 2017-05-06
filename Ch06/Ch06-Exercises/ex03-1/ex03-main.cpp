#include <iostream>
#include <iomanip>
#include "ex03.h"
using namespace std;


int main()
{
	const time t1(10, 43, 50);
	const time t2(20, 35, 25);
	time t3;

	t3.add_time(t1, t2);

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	return 0;
}
