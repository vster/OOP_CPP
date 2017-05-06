// sstrchng.cpp
// изменение частей строки
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	string s1 ( "Vse haraso, prekrasnay markiza." );
	string s2 ( "princessa" );
	string s3 ( "Privetstvuy " );

	s1.erase ( 0, 12 );              // убираем "Все хорошо, "
	s1.replace ( 11, 7, s2 );        // заменяем "маркиза" на "принцесса"
	s1.insert ( 0, s3 );             // вставляем "Приветствую, "
	s1.erase ( (s1.size ( ) - 1), 1 ); // убираем '.'
	s1.append ( 3, '!' );            // добавляем '!!!'

	int x = (int)s1.find ( ' ' );         // ищем пробелы
	while ( x < (int)s1.size ( ) )        // цикл по всем пробелам
	{
//		s1.replace ( x, 1, '/' );      // заменяем пробел на '/'
		x = (int)s1.find ( ' ' );           // ищем следующий пробел
	}

	cout << "s1: " << s1 << endl;

	return 0;
}


