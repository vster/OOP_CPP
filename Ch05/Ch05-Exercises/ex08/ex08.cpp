#include <iostream>
using namespace std;

void swap( int&, int& );

int main()
{
	int n1 = 5, n2 = 20;

	cout << "Numbers are " << n1 << " and " << n2 << endl;
	swap( n1, n2 );
	cout << "After swap" << endl;
	cout << "Numbers are " << n1 << " and " << n2 << endl;
	return 0;
}

void swap(int& num1, int& num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

