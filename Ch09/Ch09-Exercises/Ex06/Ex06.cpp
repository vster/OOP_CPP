// arrover3.cpp
// демонстраци€ создани€ безопасного массива, провер€ющего
// свои индексы при использовании
// используетс€ перегрузка операции [ ]
#include <iostream>
using namespace std;
#include <process.h>      // дл€ функции exit
#include "ex06.h"


///////////////////////////////////////////////////////////
int main ( )
{
	safehilo sa1;
	int j;

	// задаем значени€ элементов
	for ( j = MINLIM; j < MAXLIM; j++ )
		sa1[ j ] = j * 10;    // используем функцию слева от знака =

	// показываем элементы
	for ( j = MINLIM; j < MAXLIM; j++ )
	{
		int temp = sa1 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}


	return 0;
}


