#include <iostream>
#include "ex01.h"
using namespace std;

int main()
{
	Int Int1(5);
	Int Int2(7);
	Int Int3;

	Int3.addInt( Int1, Int2 );

	cout << "\nInt3 = "; Int3.showInt();
	cout << endl;

	return 0;
}
