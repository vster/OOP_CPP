#include <iostream>
using namespace std;


void zeroSmaller( int& numb1, int& numb2 ) 	
{
	if( numb1 < numb2 )                 
		numb1 = 0;
	else
		numb2 = 0;
}
