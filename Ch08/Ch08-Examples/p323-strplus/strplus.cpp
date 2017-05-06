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
		// оператор сложения
		String operator+ ( String ss ) const
		{
			String temp;  // временная переменная
			if ( strlen ( str ) + strlen ( ss.str ) < SZ )
			{
				strcpy_s ( temp.str, str );    // копируем содержимое первой строки
				strcat_s ( temp.str, ss.str ); // добавляем содержимое второй строки
			}
			else
			{
				cout << "\nOverload!";
				exit ( 1 );
			}
			return temp;  // возвращаем результат
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

	s3 = s1 + s2;       // присваиваем строке s3 результат сложения строк s1 и s2

	s3.display ( );     // показываем результат
	cout << endl;

	return 0;
}


