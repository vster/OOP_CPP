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