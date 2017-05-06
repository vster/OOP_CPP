#include <iostream>
using namespace std;

class Int
{
private:
	int i;
public:
	Int ()
	{ i = 0; }
	Int ( int ii )
	{ i = ii; }
	void showInt ()
	{ cout << i; }
	Int operator + ( Int i2 ) 
	{
		long double ii;
		ii = long double(i) + long double (i2.i);
		return ( checkit ( ii ) );
 	}
	Int operator - ( Int i2 ) 
	{
		long double ii;
		ii = long double(i) - long double (i2.i);
		return ( checkit ( ii ) );
 	}
	Int operator * ( Int i2 ) 
	{
		long double ii;
		ii = long double(i) * long double (i2.i);
		return ( checkit ( ii ) );
 	}
	Int operator / ( Int i2 ) 
	{
		long double ii;
		ii = long double(i) / long double (i2.i);
		return ( checkit ( ii ) );
 	}
	Int checkit (long double answer )
	{
		if ( ( answer > 2147483647.0L ) ||
			 ( answer < -2147483647.0L ) )
		{ 
			cout << "\nOverload error.\n"; 
			exit(1); 
		}
		return Int (int (answer) );
	}
};

int main()
{
	Int Int1(135974);
	Int Int2(2264);
	Int Int3, Int4, Int5, Int6;

	Int3 = Int1 + Int2;
	Int4 = Int1 - Int2;
	Int5 = Int1 * Int2;
	Int6 = Int1 / Int2;

	cout << "\nInt1 + Int2 = "; 
	Int3.showInt();
	cout << "\nInt1 - Int2 = "; 
	Int4.showInt();
	cout << "\nInt1 * Int2 = "; 
	Int5.showInt();
	cout << "\nInt1 / Int2 = "; 
	Int6.showInt();
	cout << endl;

	return 0;
}


