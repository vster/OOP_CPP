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
	char dummychar;

	cout << "Enter first fraction: ";
	cin >> f1.c >> dummychar >> f1.z;
	cout << "Enter second fraction: ";
	cin >> f2.c >> dummychar >> f2.z;

	f3.c = f1.c * f2.z + f2.c * f1.c;
	f3.z = f1.z * f2.z;
	cout << "Sum is " << f3.c << "/" << f3.z;

	return 0;
}