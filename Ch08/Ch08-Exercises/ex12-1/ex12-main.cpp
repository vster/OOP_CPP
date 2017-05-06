#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>
#include <strstream>
#include <cstring>
#include "ex12.h"

using namespace std;

int main()
{
	double kurs_p_d = 50;
	bMoney m1, m2;
	sterling s1, s2;
	
	cout << "Enter sum in dollars: ";
	m1.getMoney();
	
	cout << "Sum in dollars ";
	m1.putMoney();
	cout << endl;
		
	s1 = static_cast<double>( m1 ) / kurs_p_d;
	
	cout << "Sum in sterling ";
	s1.putSterling();
	cout << endl;

	cout << "Enter sum in sterling: ";
	s2.getSterling();
	
	cout << "Sum in sterling ";
	s2.putSterling();
	cout << endl;
		
	m2 = static_cast<double>( s2 ) * kurs_p_d;
	
	cout << "Sum in dollars ";
	m2.putMoney();


	return 0;
}