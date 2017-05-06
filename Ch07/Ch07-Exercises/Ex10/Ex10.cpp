#include <iostream>
#include <cstring>
using namespace std;

class matrix
{
private:
	enum { SZ = 10 };
	int arlim[SZ][SZ];
	int ilim, jlim;
public:
	matrix()
	{ ilim = SZ; jlim = SZ;}
	matrix( int i, int j )
	{ ilim = i; jlim = j; }
	void putel( int i, int j, int elem );
	int getel( int i, int j );
};

int main()
{
	matrix m1 ( 7, 5 );
	
	int temp = 123;
	m1.putel( 9, 2, temp );
	m1.putel( 2, 3, temp );
	
	temp = 0;
	temp = m1.getel( 9, 2 );
	temp = m1.getel( 2, 3 );

	return 0;
}

void matrix::putel( int i, int j, int elem )
{
	if ((i >= 0) && (i < ilim) 
		 && (j >= 0) && (j < jlim))
			arlim[i][j] = elem;
	else 
		cout << "\nOut of range.\n";
	
}

int matrix::getel( int i, int j )
{
	if ((i >= 0) && (i < ilim) 
		 && (j >= 0) && (j < jlim))
			return arlim[i][j];
	else 
		cout << "\nOut of range.\n";
}