// cardaray.cpp
// класс игральных карт
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ex06.h"
using namespace std;


/////////////////////////////////////////////////////////////
int main ( )
{
	card deck [ 52 ];
	card player [4][13]; 
	int i, j;

	cout << endl;
	for ( j = 0; j < 52; j++ )   // создаем упорядоченную колоду карт
	{
		int num = ( j % 13 ) + 2;
		Suit su = Suit ( j / 13 );
		deck [ j ].set ( num, su );
	}
	// показываем исходную колоду
	cout << "Initial card pack:\n";
	for ( j = 0; j < 52; j++ )
	{
		deck [ j ].display ( );
		cout << "  ";
		if ( !( ( j + 1 ) % 13 ) ) // начинаем новую строку после каждой 13-й карты
		cout << endl;
	}
	srand ( (unsigned int) time ( NULL ) );     // инициализируем генератор случайных чисел
	for ( j = 0; j < 52; j++ )
	{
		int r = rand ( );
		int k = r % 52;     // выбираем случайную карту
		card temp = deck [ j ];    // и меняем ее с текущей
		deck [ j ] = deck [ k ];
		deck [ k ] = temp;
	}
	
	for ( j = 0; j < 13; j++)
	{
		for ( i = 0; i < 4; i++)
			player[i][j] =  deck[ j*(i+1) + i ];
	}
	// показываем раздачу
	cout << "\nDistribution:\n";
	for ( i = 0; i < 4; i++ )
	{
		cout << "\nPlayer " << i+1 << ": " << endl; 
		for ( j = 0; j < 13; j++)
		{
			player [i][j].display( );
			cout << "  ";
		}
		cout << endl;
	}

	return 0;
}

