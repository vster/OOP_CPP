#include <iostream>
using namespace std;

struct fraction
{
	int c;
	int z;
};

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
				f3.c = f1.c * f2.z + f2.c * f1.z;
				f3.z = f1.z * f2.z;
				break;
			}
			case '-': 
			{
				f3.c = f1.c * f2.z - f2.c * f1.z;
				f3.z = f1.z * f2.z;				
				break;
			}
			case '*': 
			{
				f3.c = f1.c * f2.c;
				f3.z = f1.z * f2.z;
				break;
			}
			case '/': 
			{
				f3.c = f1.c * f2.z;
				f3.z = f2.c * f1.z;								
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