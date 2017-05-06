#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
	private:
		int c;
		int z;
	public:
		fraction()
			{}
		void fget()
		{ char dummychar; cin >> c >> dummychar >> z; }
		void fput() const
		{ cout << c << "/" << z; }
		void fadd (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z + f2.c * f1.z; z = f1.z * f2.z; }
		void fsub (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z - f2.c * f1.z; z = f1.z * f2.z; }
		void fmul(const fraction f1, const fraction f2)
		{ c = f1.c * f2.c; z = f1.z * f2.z; }
		void fdiv(const fraction f1, const fraction f2)
		{ c = f1.c * f2.z; z = f2.c * f1.z; }
		void lowterms( );
};

void fraction::lowterms()
{
	long tnum, tden, temp, gcd;
	tnum = labs(c);
	tden = labs(z);
	if( tden == 0 )
	{ cout << "Incorrect divider!"; exit(1); }
	else if( tnum == 0 )
	{ c = 0; z = 1; return; }
	while( tnum != 0 )
	{
		if( tnum < tden )
		{ temp = tnum; tnum = tden; tden = temp; }
		tnum -= tden;
	}
	gcd = tden;
	c /= gcd;
	z /= gcd;
}


int main()
{
	fraction f1, f2, f3;
	char op, ch;

	do {
		cout << "Enter first fraction, operation and second fraction: ";
		f1.fget(); cin >> op; f2.fget();
		switch (op)
		{
			case '+': 
			{ f3.fadd( f1, f2 ); break;	}
			case '-': 
			{ f3.fsub( f1, f2 ); break;	}
			case '*': 
			{ f3.fmul( f1, f2 ); break; }
			case '/': 
			{ f3.fdiv( f1, f2 ); break;	}
		}
		f3.lowterms();
		cout << "Result is: "; f3.fput(); cout << endl;
		cout << "Continue? (y/n) ";
		cin >> ch;
	} while  (ch != 'n');
	return 0;
}