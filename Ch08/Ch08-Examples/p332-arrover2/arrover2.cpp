// arrover2.cpp
// демонстраци€ создани€ безопасного массива, провер€ющего
// свои индексы при использовании
// используетс€ обща€ функци€ дл€ установки и получени€ значени€
#include <iostream>
using namespace std;
#include <process.h>    // дл€ функции exit
const int LIMIT = 100;  // размер массива
///////////////////////////////////////////////////////////
class safearray
{
	private:
		int arr [ LIMIT ];
	public:
	// обратите внимание, что функци€ возвращает ссылку!
		int& access ( int n )
		{
			if ( n < 0 || n >= LIMIT )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ n ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray sa1;
	int j;

	// задаем значени€ элементов
	for ( j = 0; j < LIMIT; j++ )
		sa1.access ( j ) = j * 10; // используем функцию слева от знака =

	// показываем элементы
	for ( j = 0; j < LIMIT; j++ )
	{
		int temp = sa1.access ( j ); // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}

	return 0;
}


