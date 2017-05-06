#include <iostream>
#include <cstdlib>
#include <ctime>
#include "ex06.h"
using namespace std;

card::card ( ) // конструктор
	{ }
void card::set ( int n, Suit s ) // установка значения
{ 
	suit = s; number = n; 
}
/////////////////////////////////////////////////////////////
void card::display ( )
{
	if ( number >= 2 && number <= 10 )
		cout << number;
	else
	{
		switch ( number )
		{
			case jack: cout << 'J'; break;
			case queen: cout << 'Q'; break;
			case king: cout << 'K'; break;
			case ace: cout << 'A'; break;
		}
	}
		switch ( suit )
		{
			case clubs: cout << static_cast<char>( 5 ); break;
			case diamonds: cout << static_cast<char>( 4 ); break;
			case hearts: cout << static_cast<char>( 3 ); break;
			case spades: cout << static_cast<char>( 6 ); break;
		}
}