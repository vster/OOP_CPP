#include <iostream>
#include <iomanip>
using namespace std;
#include "ex05.h"

int main()
{
	time t1(10, 43, 59);
	time t2(20, 35, 25);
	time t3, t4;
	
	t3 = t1 + t2;

	cout << "\nt1 = "; t1.displaytime();
	cout << "\nt2 = "; t2.displaytime();
	cout << "\nt3 = "; t3.displaytime();

	++t1;
	cout << "\nt1 = "; t1.displaytime();
	++t2;
	cout << "\nt2 = "; t2.displaytime();
	
	--t1;
	cout << "\nt1 = "; t1.displaytime();
	--t2;
	cout << "\nt2 = "; t2.displaytime();

	t4 = t1++;
	cout << "\nt1 = "; t4.displaytime();
	t4 = t2++;
	cout << "\nt1 = "; t4.displaytime();

	t4 = t1--;
	cout << "\nt1 = "; t4.displaytime();
	t4 = t2--;
	cout << "\nt1 = "; t4.displaytime();

	return 0;
}
