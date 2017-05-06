// sstrcom.cpp
// сравнение строк
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	string aName = "Ivan";
	string userName;

	cout << "Enter your name: ";
	cin >> userName;
	if ( userName == aName )
		cout << "Hello, Ivan\n";
	else if ( userName < aName )
		cout << "Your name go before name Ivan\n";
	else
		cout << "Your name go after name Ivan\n";

	int n = userName.compare ( 0, 2, aName, 0, 2 );
	cout << "First two letters of your name ";
	if ( n == 0 )
    cout << "coincide ";
	else if ( n < 0 )
		cout << "go before ";
	else
		cout << "go after ";
	cout << aName.substr ( 0, 2 ) << endl;

	return 0;
}


