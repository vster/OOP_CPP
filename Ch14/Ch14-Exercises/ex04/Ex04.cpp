#include <iostream>
using namespace std;

template <class T>
void swaps (T &x, T &y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

int main()
{
	float a, b;
	
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;

	swaps(a,b);

	cout << "\na = " << a;
	cout << "\nb = " << b;

	return 0;
}

