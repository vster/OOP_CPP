#include <iostream>
using namespace std;
#include <process.h>      // для функции exit
const int LIMIT = 100;    // размер массива
///////////////////////////////////////////////////////////
template <class T>
class safearray
{
	private:
		T arr [ LIMIT ];
	public:
		// обратите внимание, что функция возвращает ссылку!
		T& operator[ ] ( int n )
		{
			if ( n < 0 || n >= LIMIT )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ n ];
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	safearray<int> sa1;
	int j;

	// задаем значения элементов
	for ( j = 0; j < LIMIT; j++ )
		sa1[ j ] = j * 10;    // используем функцию слева от знака =

	// показываем элементы
	for ( j = 0; j < LIMIT; j++ )
	{
		int temp = sa1 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}

	safearray<float> sa2;
	
	// задаем значения элементов
	for ( j = 0; j < LIMIT; j++ )
		sa2[ j ] = j * 10;    // используем функцию слева от знака =

	// показываем элементы
	for ( j = 0; j < LIMIT; j++ )
	{
		float temp = sa2 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}

	safearray<double> sa3;
	
	// задаем значения элементов
	for ( j = 0; j < LIMIT; j++ )
		sa3[ j ] = j * 10;    // используем функцию слева от знака =

	// показываем элементы
	for ( j = 0; j < LIMIT; j++ )
	{
		double temp = sa3 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}

	safearray<char> sa4;
	
	// задаем значения элементов
	for ( j = 0; j < LIMIT; j++ )
		sa4[ j ] = j +'0';    // используем функцию слева от знака =

	// показываем элементы
	for ( j = 0; j < LIMIT; j++ )
	{
		char temp = sa4 [ j ]; // используем функцию справа от знака =
		cout << "Element " << j << " equal " << temp << endl;
	}



	return 0;
}

