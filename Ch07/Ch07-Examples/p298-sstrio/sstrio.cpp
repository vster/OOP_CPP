// sstrio.cpp
// ввод/вывод для класса string
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	string full_name, nickname, address;
	string greeting ( "Hello, " );

	cout << "Enter your name: ";
	getline ( cin, full_name );
	cout << "Your name: " << full_name << endl;

	cout << "Enter your nickname: ";
	cin >> nickname;
	
	greeting += nickname;
	cout << greeting << endl;

	cout << "Enter your address in some strings\n";
	cout << "Finish entering by symbol $'\n";
	getline ( cin, address, '$' );
	cout << "Your address: " << address << endl;

	return 0;
}


