#include <iostream>
using namespace std;
#include "ex04.h"

int main()
{
	Int Int1(135974);
	Int Int2(2264);
	Int Int3, Int4, Int5, Int6;

	Int3 = Int1 + Int2;
	Int4 = Int1 - Int2;
	Int5 = Int1 * Int2;
	Int6 = Int1 / Int2;

	cout << "\nInt1 + Int2 = "; 
	Int3.showInt();
	cout << "\nInt1 - Int2 = "; 
	Int4.showInt();
	cout << "\nInt1 * Int2 = "; 
	Int5.showInt();
	cout << "\nInt1 / Int2 = "; 
	Int6.showInt();
	cout << endl;

	return 0;
}


