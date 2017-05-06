#include <iostream>
#include <cmath>
using namespace std;

class fraction
{
	private:
		int c;
		int z;
	public:
		fraction() : c(0), z(1)
			{}
		void fget()
		{ char dummychar; cin >> c >> dummychar >> z; }
		void fput() const
		{ cout << c << "/" << z; }
/*		void fadd (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z + f2.c * f1.z; z = f1.z * f2.z; }
		void fsub (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z - f2.c * f1.z; z = f1.z * f2.z; }
		void fmul(const fraction f1, const fraction f2)
		{ c = f1.c * f2.c; z = f1.z * f2.z; }
		void fdiv(const fraction f1, const fraction f2)
		{ c = f1.c * f2.z; z = f2.c * f1.z; }
		void fdiv(const fraction f1, const int n)
		{ c = f1.c; z = f1.z * n; }
*/
		void fadd (const fraction &f1, const fraction &f2)
		{ c = f1.c * f2.z + f2.c * f1.z; z = f1.z * f2.z; }
		void fsub (const fraction &f1, const fraction &f2)
		{ c = f1.c * f2.z - f2.c * f1.z; z = f1.z * f2.z; }
		void fmul(const fraction &f1, const fraction &f2)
		{ c = f1.c * f2.c; z = f1.z * f2.z; }
		void fdiv(const fraction &f1, const fraction &f2)
		{ c = f1.c * f2.z; z = f2.c * f1.z; }
		void fdiv(const fraction &f1, const int n)
		{ c = f1.c; z = f1.z * n; }
		void lowterms( );
		void fmake(int cin, int zin)
		{ c = cin; z = zin; }
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
	fraction frac[10];
	fraction sumfrac, avfrac;
	char ch;
	int n = 0;
	
	do
	{
		cout << "Enter fraction: ";
		frac[n++].fget();
		cout << "Continue (y/n)? ";
		cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < n; i++)
	{
		sumfrac.fadd(sumfrac, frac[i]);
		sumfrac.lowterms();
	}
	
	avfrac.fdiv(sumfrac, n);
	avfrac.lowterms();

	cout << "\nAverage fraction: ";
	avfrac.fput();

	return 0;
}


