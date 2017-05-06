#include <iostream>
using namespace std;
#include <string.h>          // для функций str*
///////////////////////////////////////////////////////////
class String
{
	protected:
		enum { SZ = 40 };        // размер массива
		char str [ SZ ];         // массив для хранения строки
	public:
		// конструктор без параметров
		String ( )
		{ str [ 0 ] = '\x0'; }
		// конструктор с одним параметром
		String ( char s [ ] )
		{ strcpy_s ( str, s ); } // сохраняем строку в массиве
		// показ строки
		void display ( ) const
		{ cout << str; }
		// перевод строки к обычному типу
		operator char* ( )
		{ return str; }
};

class Pstring : public String
{
public:
	Pstring ( char s[]);
};
Pstring::Pstring( char s[])
{
	int j;
	if ( strlen(s) > SZ - 1 )
	{
		for ( j = 0; j < SZ - 1; j++ )
			str [j] = s [j];
		str[j] = '\0';
	}
	else
		String ( s );
}

int main()
{
	Pstring p1 = "fgsdg sf sfgdsf gsdfg fgds sadfu aspdf asdf pasdf asdpf asdfuasdfa sdfpdsa fpaosdf asdpfoaudsfasdfasd";
	cout << "\ns1 = ";
	p1.display();

	Pstring p2 = "dasfadsfads adsfasd asfasdf asd";
	cout << "\ns2 = ";
	p2.display();

	return 0;
}


