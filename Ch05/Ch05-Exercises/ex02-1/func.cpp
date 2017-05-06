#include <iostream>
using namespace std;

double power(double n, int p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}