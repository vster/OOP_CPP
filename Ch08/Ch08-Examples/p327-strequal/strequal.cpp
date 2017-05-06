// strequal.cpp
// перегрузка операции ==
#include <iostream>
using namespace std;
#include <string.h> // для функции strcmp
///////////////////////////////////////////////////////////
class String            // наш класс для строк
{
	private:
		enum { SZ = 80 };   // максимальный размер строки
		char str [ SZ ];    // массив для строки
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
		// получение строки
		void getstr ( )
		{ cin.get ( str, SZ ); }
		// оператор сравнения
		bool operator == ( String ss ) const
		{
			return ( strcmp ( str, ss.str ) == 0 ) ? true : false;
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "yes";
	String s2 = "no";
	String s3;

	cout << "\nEnter 'yes' or 'no': ";
	s3.getstr ( );        // получаем строку от пользователя

	if ( s3 == s1 )       // сравниваем со строкой 'да'
		cout << "You enter 'yes'\n";
	else if ( s3 == s2 )       // сравниваем со строкой 'нет'
		cout << "You enter 'no'\n";
	else
		cout << "Follow instructions!\n";

	return 0;
}

