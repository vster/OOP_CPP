#include <iostream>
#include <iomanip>
using namespace std;
#include "ex03.h"

int main()
{
	const time t1(10, 43, 50);
	const time t2(20, 35, 25);
	time t3;
	
	t3 = t1 + t2;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	return 0;
}
