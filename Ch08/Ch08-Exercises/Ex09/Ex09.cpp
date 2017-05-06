// arrover3.cpp
// демонстраци€ создани€ безопасного массива, провер€ющего
// свои индексы при использовании
// используетс€ перегрузка операции [ ]
#include <iostream>
using namespace std;
#include <process.h>      // дл€ функции exit
const int MINLIM = 100;    // размер массива
const int MAXLIM = 175;
///////////////////////////////////////////////////////////
class safearray
{
	private:
		int arr [ MAXLIM - MINLIM ];
	public:
		// обратите внимание, что функци€ возвращает ссылку!
		int& operator[ ] ( int n )
		{
			int i = n - MINLIM;
			if ( i < 0 || i >= ( MAXLIM - MINLIM ) )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ i ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray sa1;
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


