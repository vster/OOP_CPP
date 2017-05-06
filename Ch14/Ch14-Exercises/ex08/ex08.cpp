// arrover3.cpp
// демонстраци€ создани€ безопасного массива, провер€ющего
// свои индексы при использовании
// используетс€ перегрузка операции [ ]
#include <iostream>
using namespace std;
#include <process.h>      // дл€ функции exit
const int LIMIT = 100;    // размер массива
///////////////////////////////////////////////////////////
template <class T>
class safearray
{
	private:
		T arr [ LIMIT ];
	public:
		// обратите внимание, что функци€ возвращает ссылку!
		T& operator[ ] ( int n )
		{
			if ( n < 0 || n >= LIMIT )
				throw ArrEx( n );
			return arr [ n ];
		}
		class ArrEx 
		{
		public:
			int errn;
			ArrEx( int in )
			{
				errn = in;
			}
		};
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray<float> sa1;
	int j;

	// задаем значени€ элементов
	try
	{
	for ( j = 0; j < LIMIT; j++ )
		sa1[ j ] = j * 10;    // используем функцию слева от знака =

	}
	catch(safearray<float>::ArrEx ax)
	{
		cout << "\nError index is = " << ax.errn << endl;
	}


	// показываем элементы
	try
	{
	for ( j = 0; j < LIMIT+2; j++ )
	{
		int temp = sa1 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}
	}
	catch(safearray<float>::ArrEx ax)
	{
		cout << "\nError index is = " << ax.errn << endl;
	}


	return 0;
}


