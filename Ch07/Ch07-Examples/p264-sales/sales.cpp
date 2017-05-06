// sales.cpp
// определение среднего дневного объема продаж
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	const int SIZE = 6;
	double sales [ SIZE ];
	
	cout << "Enter volume of sales on each of six days\n";
	for ( int j = 0; j < SIZE; j++ )
		cin >> sales [ j ];
	double total = 0;
	for ( int j = 0; j < SIZE; j++ )
		total += sales [ j ];
	double average = total / SIZE;
	cout << "Average volume: " << average << endl;

	return 0;
}


