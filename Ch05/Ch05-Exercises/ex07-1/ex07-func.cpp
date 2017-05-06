#include <iostream>
#include "ex07.h"
using namespace std;

double power(double n, int p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(char n, char p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(int n, int p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(long n, long p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}

double power(float n, float p)
{
	double result = 1.0;
	
	for ( int i = 0; i < p; i++)
		result *= n;
	return result;
}