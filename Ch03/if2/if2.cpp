// if2.cpp
// использование нескольких операторов в теле цикла if
#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Enter number: ";
	cin >> x;
	if( x > 100 )
	{
		cout << "Number " << x;
		cout << " is more, than 100\n";
	}
	return 0;
}

