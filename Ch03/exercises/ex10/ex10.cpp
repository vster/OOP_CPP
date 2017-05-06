#include <iostream>
using namespace std;

int main()
{
	float deposit, fin_deposit;
	int period, i;
	float rate;

	cout << "Enter initial deposit: ";
	cin >> deposit;
	cout << "Enter interest rate: ";
	cin >> rate;
	cout << "Enter final deposit: ";
	cin >> fin_deposit;

	for (i = 0; deposit < fin_deposit; i++)
		deposit += deposit * rate /100;

	cout << "Period: " << i << " years";

	return 0;
}
