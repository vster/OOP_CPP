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
		enum { SZ = 10 }; // максимальный размер строки
		char str [ SZ ];  // массив для строки
	public:
		// конструктор без параметров
		String ( )
		{ strcpy_s ( str, "" ); }
		// конструктор с одним параметром
		String ( char s [ ] )
		{ strcpy_s ( str, s ); }
		void get ( )
		{
			cin >> str;
		}
		// показ строки
		void display ( ) const
		{ 
			cout << str; 
		}
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
				throw StringEx();
				//cout << "\nOverload!";
				//exit ( 1 );
			}
			return temp;  // возвращаем результат
		}
		class StringEx { };
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1;	// = "\nMerry Crysmas! "; 	// используем конструктор с параметром
	String s2;	// = "Happy New Year!";   	// используем конструктор с параметром
	String s3;                      	// используем конструктор без параметров

	
	try
	{
	cout << "Enter S1 : ";
	s1.get();
	cout << "Enter S2 : ";
	s2.get();
	
	// показываем строки
	s1.display ( );
	cout << endl;
	s2.display ( );
	cout << endl;
	s3.display ( );
	cout << endl;

	
	s3 = s1 + s2;       // присваиваем строке s3 результат сложения строк s1 и s2
	}
	catch(String::StringEx)
	{
		cout << "\nOverload!";
	}
	
	
	s3.display ( );     // показываем результат
	cout << endl;

	return 0;
}


