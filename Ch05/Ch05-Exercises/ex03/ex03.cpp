#include <iostream>
using namespace std;

void zeroSmaller( int&, int&);

int main()
{
	
	int n1, n2;

	cout << "Enter 2 numbers: ";
	cin >> n1 >> n2;

	zeroSmaller( n1, n2);

	cout << "Numbers are " << n1 << " and " << n2;

	return 0;
}

void zeroSmaller( int& numb1, int& numb2 ) 	
{
	if( numb1 < numb2 )                 
		numb1 = 0;
	else
		numb2 = 0;
}

