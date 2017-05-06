//width2.cpp
//применение манипулятора setw
#include <iostream>
#include <iomanip>         // для использования setw
using namespace std;

int main()
{
	long pop1 = 8425785, pop2 = 47, pop3 = 9761;
	cout << setw(10) << "City " << setw(14)
	<< "Population " << endl
	<< setw(10) << "Moscow" << setw(14) << pop1 << endl
	<< setw(10) << "Kirov" << setw(14) << pop2 << endl
	<< setw(10) << "Ugrumovka" << setw(14) << pop3 << endl;
	return 0;
}


