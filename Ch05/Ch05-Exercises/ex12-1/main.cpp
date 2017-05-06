#include <iostream>
#include "ex12.h"
using namespace std;

int main()
{
	fraction f1, f2, f3;
	char dummychar, ch;
	char op;

	do {
		cout << "Enter first fraction, operation and second fraction: ";
		cin >> f1.c >> dummychar >> f1.z >> op >> f2.c >> dummychar >> f2.z;
		switch (op)
		{
			case '+': 
			{
				f3 = fadd( f1, f2 );
				break;
			}
			case '-': 
			{
				f3 = fsub( f1, f2 );
				break;
			}
			case '*': 
			{
				f3 = fmul( f1, f2 );
				break;
			}
			case '/': 
			{
				f3 = fdiv( f1, f2 );
				break;
			}
			default: 
			{
				f3.c = 0;
				f3.z = 1;
			}
		}
		cout << "Result is: " << f3.c << "/" << f3.z << endl;
		cout << "One more operation? (y/n) ";
		cin >> ch;
	} while  (ch != 'n');
	return 0;
}
