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
	Pstring ( ) : String ( )
	{ }
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
		strcpy_s ( str, s );
}

class Pstring2 : public Pstring
{
public:
	Pstring2 ( ) : Pstring ( )
	{ }
	Pstring2 ( char s[ ] ) : Pstring ( s )
	{ }
	Pstring2 left ( Pstring2 s1, int n )
	{
		int j;
		Pstring2 ts;
		for ( j = 0; j < n; j++ )
			str [j] = s1.str [j];
		str[j] = '\0';
		strcpy_s(ts.str, str);
		return ts;
	}
	Pstring2 mid ( Pstring2 s1, int s, int n )
	{
		int j, i;
		Pstring2 ts;
		for ( i=0,j=s-1; j < s-1+n; j++)
			str[i++] = s1.str[j];
		str[i] = '\0';
		strcpy_s(ts.str, str);
		return ts;
	}
	Pstring2 right ( Pstring2 s1, int n)
	{
		int j, i;
		int len = strlen(s1.str);
		Pstring2 ts;
		for ( i=0,j = len-n; j < len; j++)
			str[i++] = s1.str[j];
		str[i] = '\0';
		strcpy_s(ts.str, str);
		return ts;
	}
};

int main()
{
	Pstring2 s1 = "12345678901234567890";
	Pstring2 s2, s3, s4, s5;

	s3 = s2.left (s1, 10);
	s4 = s2.mid (s1, 3, 5);
	s5 = s2.right (s1, 5);

	return 0;
}