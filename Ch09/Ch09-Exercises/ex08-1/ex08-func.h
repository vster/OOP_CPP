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

class Pstring2 : public Pstring
{
public:
	Pstring2 ( ) : Pstring ( )
	{ }
	Pstring2 ( char s[ ] ) : Pstring ( s )
	{ }
	Pstring2 left ( Pstring2 s1, int n );
	Pstring2 mid ( Pstring2 s1, int s, int n );
	Pstring2 right ( Pstring2 s1, int n);
};
