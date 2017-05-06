#include <iostream>
using namespace std;

int main()
{
	int c1, c2, c3;
	int z1, z2, z3;
	char dummychar;

	cout << "Enter first fraction: ";
	cin >> c1 >> dummychar >> z1;
	cout << "Enter second fraction: ";
	cin >> c2 >> dummychar >> z2;

	c3 = c1 * z2 + c2 * z1;
	z3 = z1 * z2;
	cout << "Sum is " << c3 << "/" << z3;

	return 0;
}