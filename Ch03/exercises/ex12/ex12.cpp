#include <iostream>

using namespace std;

int main()
{
	int c1, c2, c3;
	int z1, z2, z3;
	char dummychar, ch;
	char op;

	do {
		cout << "Enter first fraction, operation and second fraction: ";
		cin >> c1 >> dummychar >> z1 >> op >> c2 >> dummychar >> z2;
		switch (op)
			{
			case '+': 
				{
				c3 = c1 * z2 + c2 * z1;
				z3 = z1 * z2;
				break;
				}
			case '-': 
				{
				c3 = c1 * z2 - c2 * z1;
				z3 = z1 * z2;				
				break;
				}
			case '*': 
				{
				c3 = c1 * c2;
				z3 = z1 * z2;
				break;
				}
			case '/': 
				{
				c3 = c1 * z2;
				z3 = c2 * z1;								
				break;
				}
			default: 
				{
				c3 = 0;
				z3 = 1;
				}
			}
		cout << "Result is: " << c3 << "/" << z3 << endl;
		cout << "One more operation? (y/n) ";
		cin >> ch;
	} while  (ch != 'n');
	return 0;
}