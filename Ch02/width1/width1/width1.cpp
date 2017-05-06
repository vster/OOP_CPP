//width1.cpp
//демонстрирует необходимость применения манипулятора setw
#include <iostream>
using namespace std;
int main()
{
	long pop1 = 4789426, pop2 = 274124, pop3 = 9761;
	cout << "City    " << "Pop." << endl
	<<"Moscow " << pop1 <<endl
	<<"Kirov " << pop2 <<endl
	<<"Ugrumovka " <<pop3 <<endl;
	return 0;
}


