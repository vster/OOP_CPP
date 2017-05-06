#include <iostream>
#include <cmath>
using namespace std;
#include "ex07.h"

int main()
{
	fraction f1, f2, f3, zf (0, 1);
	char op, ch;

	do {
		cout << "Enter first fraction, operation and second fraction: ";
		f1.fget(); cin >> op; f2.fget();
		switch (op)
		{
			case '+': 
			{ f3 = f1 + f2; break;	}
			case '-': 
			{ f3 = f1 - f2; break;	}
			case '*': 
			{ f3 = f1 * f2; break; }
			case '/': 
			{ f3 = f1 / f2; break;	}
		}
		f3 = f3.lowterms ( f3 );
		cout << "Result is: "; f3.fput(); cout << endl;
	} while  (f1 != zf);
	return 0;
}