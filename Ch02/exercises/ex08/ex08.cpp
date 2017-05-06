#include <iostream>
#include <iomanip>         // для использования setw
using namespace std;

int main()
{
	long pop1 = 8425785, pop2 = 47876, pop3 = 9761;
	cout << setw(10) << "City " << setw(14)
	<< "Population " << endl
	<< setw(10) << setfill(' ') << "Moscow" << setw(14) << setfill('.') << pop1 << endl 
	<< setw(10) << setfill(' ') << "Kirov" << setw(14) << setfill('.') << pop2 << endl
	<< setw(10) << setfill(' ') << "Ugrumovka" << setw(14) << setfill('.') << pop3 << endl;
	return 0;
}
