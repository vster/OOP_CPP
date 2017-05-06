// sstrfind.cpp
// поиск подстрок
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	string s1 = "In the town, where I was born.";
	int n;

	n = (int)s1.find ( "town" );
	cout << "Town found: " << n << endl;

	n = (int)s1.find_first_of ( "table" );
	cout << "First from table: " << n << endl;
	
	n = (int)s1.find_first_not_of ( "abcdABCD" );
	cout << "First not from : " << n << endl;

	return 0;
}


