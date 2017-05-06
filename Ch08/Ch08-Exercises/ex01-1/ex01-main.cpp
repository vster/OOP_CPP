#include <iostream>
using namespace std;
#include "ex01.h"

///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist1, dist3, dist4;  // определяем переменные
	Distance dist5, dist6;
	dist1.getdist ( );             // получаем информацию

	Distance dist2 ( 11, 6.25 );   // определяем переменную с конкретным значением

	dist3 = dist1 + dist2;         // складываем две переменные

	dist4 = dist1 + dist2 + dist3; // складываем несколько переменных

	// показываем, что же у нас получилось
	cout << "dist1 = "; dist1.showdist ( ); cout << endl;
	cout << "dist2 = "; dist2.showdist ( ); cout << endl;
	cout << "dist3 = "; dist3.showdist ( ); cout << endl;
	cout << "dist4 = "; dist4.showdist ( ); cout << endl;
	cout << endl;

	dist5 = dist4 - dist1;
	cout << "dist5 = "; dist5.showdist ( ); cout << endl;
	
	
	return 0;
}


