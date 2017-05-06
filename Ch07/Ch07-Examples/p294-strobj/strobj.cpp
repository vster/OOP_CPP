// strobj.cpp
// строка как класс
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
class String
{
	private:
		enum { SZ = 80 };        // максимальный размер строки
		char str [ SZ ];          // сама строка
	public:
		String ( ) // конструктор без параметров
			{ str [ 0 ] = '\0'; }
		String ( char s [ ] )     // конструктор с одним параметром
			{ strcpy_s ( str, s ); }
		void display ( )          // показ строки
			{ cout << str; }
		void concat ( String s2 ) // сложение строк
			{
			if ( strlen ( str ) + strlen ( s2.str ) < SZ )
				strcat_s ( str, s2.str );
			else
				cout << "\nOverload!";
      }
};
///////////////////////////////////////////////////////////
int main ( )
{
  String s1 ( "Happy New Year!  " ); // конструктор с одним параметром
  String s2 = "Merry Crysmas!";  	// аналогично, но в другой форме
  String s3;                        // конструктор без параметров

  cout << "\ns1 = "; s1.display ( );  // показываем все строки
  cout << "\ns2 = "; s2.display ( );
  cout << "\ns3 = "; s3.display ( );

  s3 = s1;                          // присвоение
  cout << "\ns3 = "; s3.display ( );

  s3.concat ( s2 );                 // сложение
  cout << "\ns3 = "; s3.display ( );
  cout << endl;

  return 0;
}

