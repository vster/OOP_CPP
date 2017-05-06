const int LIMIT = 100;    // размер массива
const int MINLIM = 100;    // размер массива
const int MAXLIM = 175;

///////////////////////////////////////////////////////////
class safearray
{
	protected:
		int arr [ LIMIT ];
	public:
		// обратите внимание, что функция возвращает ссылку!
		int& operator[ ] ( int n )
		{
			if ( n < 0 || n >= LIMIT )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ n ];
		}
};
///////////////////////////////////////////////////////////
class safehilo : public safearray
{
	public:
		// обратите внимание, что функция возвращает ссылку!
		int& operator[ ] ( int n )
		{
			int i = n - MINLIM;
			if ( i < 0 || i >= ( MAXLIM - MINLIM ) )
			{ cout << "\nError index!"; exit ( 1 ); }
			return arr [ i ];
		}
};