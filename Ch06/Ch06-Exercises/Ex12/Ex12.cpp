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
		// —м. упр. 12-1
		void fadd (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z + f2.c * f1.z; z = f1.z * f2.z; }
		void fsub (const fraction f1, const fraction f2)
		{ c = f1.c * f2.z - f2.c * f1.z; z = f1.z * f2.z; }
		void fmul(const fraction f1, const fraction f2)
		{ c = f1.c * f2.c; z = f1.z * f2.z; }
		void fdiv(const fraction f1, const fraction f2)
		{ c = f1.c * f2.z; z = f2.c * f1.z; }
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
	fraction result;
	int zm;
	int i, j;
	char ch;
	
	do 
	{
	cout << "Enter divider: "; cin >> zm;
	
	for ( i = 0; i < zm-1; i++)
	{
		frac[i].fmake(i+1, zm);
		frac[i].lowterms();
	}

	for ( i = 0; i < zm-1; i++)
	{
		cout << "\t";
		frac[i].fput();
	}
	cout << endl;
	
	for (i = 0; i < zm * 8; i++)
		cout << "-";
	cout << endl;

	for ( j = 0; j < zm-1; j++)
	{
		frac[j].fput();
		for ( i = 0; i < zm-1; i++)
		{
			result.fmul(frac[j], frac[i]);
			result.lowterms();
			cout << "\t";
			result.fput();
		}
		cout << endl;
	}
	cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}


