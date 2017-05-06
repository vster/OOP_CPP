// strplus.cpp
// перегрузка операции + для строк
#include <iostream>
using namespace std;
#include <string.h>   // для функций strcpy, strcat
#include <stdlib.h>   // для функции exit
///////////////////////////////////////////////////////////
class String          // наш класс для строк
{
	private:
		enum { SZ = 80 }; // максимальный размер строки
		char str [ SZ ];  // массив для строки
	public:
		// конструктор без параметров
		String ( )
		{ strcpy_s ( str, "" ); }
		// конструктор с одним параметром
		String ( char s [ ] )
		{ strcpy_s ( str, s ); }
		// показ строки
		void display ( ) const
		{ cout << str; }
		// оператор добавления
		String operator += ( String ss ) 
		{
			if ( strlen ( str ) + strlen ( ss.str ) < SZ )
			{
					strcat_s ( str, ss.str ); // добавляем содержимое второй строки
			}
			else
			{
				cout << "\nOverload!";
				exit ( 1 );
			}
			return str;  // возвращаем результат
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "\nMerry Crysmas! "; 	// используем конструктор с параметром
	String s2 = "Happy New Year!";   	// используем конструктор с параметром
	String s3;                      	// используем конструктор без параметров

	// показываем строки
	s1.display ( );
	s2.display ( );
	s3.display ( );

	s1 += s2;

	// s3 = s1 + s2;       // присваиваем строке s3 результат сложения строк s1 и s2

	s1.display ( );     // показываем результат
	cout << endl;

	return 0;
}


