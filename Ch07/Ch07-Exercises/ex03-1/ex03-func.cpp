#include <iostream>
using namespace std;
#include "ex03.h"

Distance::Distance() : feet( 0 ), inches ( 0 )
	{}
void Distance::getdist ( )	// получение информации
{
	cout << "\n  Enter feet: "; cin >> feet;
	cout << "  Enter inches: "; cin >> inches;
}
void Distance::showdist ( ) const		// показ информации
{ 
	cout << feet << "\'-" << inches << '\"'; 
}
//--------------------------------------------------------
// сложение длин d1 и d2
void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d1.inches + d2.inches;        // сложение дюймов
	feet = 0;                              // с возможным заемом
	if(inches >= 12.0)                     // если число дюймов больше 12.0,
	{                                      // то уменьшаем число дюймов
		inches -= 12.0;                      // на 12.0 и увеличиваем
		feet++;                              // число футов на 1
	}
	feet +=	d1.feet + d2.feet;             // сложение футов
}
void Distance::div_dist( Distance d1, int divisor)
{
	float fltfeet = d1.feet + d1.inches / 12.0F;
	fltfeet /= divisor;
	feet = (int) fltfeet;
	inches = ( fltfeet - (float) feet ) * 12.0F;
}
