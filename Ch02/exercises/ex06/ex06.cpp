#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double sum_usd;
	double kurs_ukp_usd = 1.487;
	double kurs_frf_usd = 0.172;
	double kurs_dom_usd = 0.584;
	double kurs_jpy_usd = 0.00955;

	cout << "Enter sum in dollars: ";
	cin >> sum_usd;
	cout << "This sum in UK pounds     " << setw(10) << sum_usd/kurs_ukp_usd << endl
		 << "This sum in french franks " << setw(10) << sum_usd/kurs_frf_usd << endl
		 << "This sum in german marks  " << setw(10) << sum_usd/kurs_dom_usd << endl
		 << "This sum in japan yens    " << setw(10) << sum_usd/kurs_jpy_usd << endl;	 
	return 0;
}
