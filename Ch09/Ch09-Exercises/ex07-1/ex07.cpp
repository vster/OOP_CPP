#include <iostream>
#include "ex07.h"

using namespace std;


///////////////////////////////////////////////////////////
int main ( )
{
	CountPost c1;                            // переменные класса CountDn
	CountPost c2 ( 100 );

	cout << "\nc1 = " << c1.get_count ( ); // выводим значения на экран
	cout << "\nc2 = " << c2.get_count ( );

	c1++; c1++; c1++;                      // увеличиваем c1
	cout << "\nc1 = " << c1.get_count ( ); // показываем результат


	c1--; c1--; c1--;                      // уменьшаем c1
	cout << "\nc1 = " << c1.get_count ( ); // показываем результат


	c2++; c2++;                            // увеличиваем c2
	cout << "\nc2 = " << c2.get_count ( );   // показываем результат

	c2--; c2--;                            // уменьшаем c2
	cout << "\nc2 = " << c2.get_count ( );   // показываем результат

	
	CountPost c3 = c2--;                     // создаем переменную c3 на основе c2
	cout << "\nc3 = " << c3.get_count ( ); // показываем значение

	cout << endl;

	return 0;
}