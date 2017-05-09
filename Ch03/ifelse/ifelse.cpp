// ifelse.cpp
// применение конструкции if...else
#include <iostream>
using namespace std;

int main()
{
	int x;
  
	cout << "\nEnter number: ";
	cin >> x;
	if( x > 100 )
		cout << "This number is more, than 100\n";
	else
		cout << "This number is not more than 100\n";
	return 0;
}


