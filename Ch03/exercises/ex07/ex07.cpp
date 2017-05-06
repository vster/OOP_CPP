#include <iostream>
using namespace std;

int main()
{
	float deposit;
	int period, i;
	float rate;

	cout << "Enter initial deposit: ";
	cin >> deposit;
	cout << "Enter period: ";
	cin >> period;
	cout << "Enter rate: ";
	cin >> rate;
	for (i = 0; i < period; i++)
	{
		deposit += deposit * rate / 100;
	}
	cout << "In " << period << " years you will get "
		 << deposit << " dollars." << endl;
	return 0;
}