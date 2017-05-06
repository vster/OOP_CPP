#include <iostream>
#include <iomanip>
using namespace std;
#include "ex06.h"

int main()
{
	time t1(20, 43, 59);
	time t2(10, 51, 25);
	time t3, t4, t5, t6;
	int n = 5;

	t3 = t1 + t2;
	t4 = t1 - t2;
	t5 = t1 * n;
	t6 = t1 / n;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();
	cout << "\nt4 = "; t4.displaytime();	
	cout << "\nt5 = "; t5.displaytime();
	cout << "\nt6 = "; t6.displaytime();

	return 0;
}
