#include <iostream>
#include "ex02.h"
using namespace std;

int main()
{
	int p;
	double num, ans;
	
	cout << "Enter integer number: "; cin >> num;
	cout << "Enter degree (2 or more): "; cin >> p;
	if ( p == 2 )
		ans = power(num);
	else if ( p > 2 )
		ans = power(num, p);
	else
		return 1;
	cout << "Power of number " << num
		<< " in degree " << p << " is " << ans << endl;
	return 0;
}