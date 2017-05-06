#include <iostream>
using namespace std;
#include "ex01.h"

// конструктор без параметров
Distance::Distance ( ) : feet ( 0 ), inches ( 0.0 )
	{ }
// конструктор с двумя параметрами
Distance::Distance ( int ft, float in ) : feet ( ft ), inches ( in )
	{ }
// получение информации от пользователя
void Distance::getdist ( )
{
	cout << "\nEnter feet: "; cin >> feet;
	cout << "Enter inches: ";  cin >> inches;
}
// показ информации
void Distance::showdist ( )
{ cout << feet << "\'-" << inches << '\"'; }
///////////////////////////////////////////////////////////
// сложение двух длин
Distance Distance::operator+ ( Distance d2 ) const
{
	int f = feet + d2.feet;       // складываем футы
	float i = inches + d2.inches; // складываем дюймы
	if ( i >= 12.0 )              // если дюймов стало больше 12
	{
		i -= 12.0;                  // то уменьшаем дюймы на 12
		f++;                        // и увеличиваем футы на 1
	}
	return Distance ( f, i );     // создаем и возвращаем временную переменную
}
// вычитание двух длин
Distance Distance::operator- ( Distance d2 ) const
{
	int f = feet - d2.feet;       // вычитаем футы
	float i = inches - d2.inches; // вычитаем дюймы
	if ( i < 0.0 )              // если дюймов стало меньше 0
	{
		i += 12.0;                  // то увеличиваем дюймы на 12
		f--;                        // и уменьшаем футы на 1
	}
	return Distance ( f, i );     // создаем и возвращаем временную переменную
}
