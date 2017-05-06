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
		fraction (int cin, int zin) : c ( cin ), z ( zin )
			{}
		void fget()
		{ char dummychar; cin >> c >> dummychar >> z; }
		void fput() const
		{ cout << c << "/" << z; }
		fraction operator + ( fraction f2 )
		{ 
			fraction tf;
			tf.c = c * f2.z + f2.c * z; 
			tf.z = z * f2.z; 
			return tf;	
		}
		fraction operator - ( fraction f2 )
		{
			fraction tf;
			tf.c = c * f2.z - f2.c * z; 
			tf.z = z * f2.z; 
			return tf;	
		}
		fraction operator * ( fraction f2 )
		{
			fraction tf;
			tf.c = c * f2.c; 
			tf.z = z * f2.z;
			return tf;	
		}
		fraction operator / ( fraction f2 )
		{
			fraction tf;
			tf.c = c * f2.z; 
			tf.z = f2.c * z;
			return tf;	
		}
		bool operator == ( fraction f2 )
		{
			if ((c == f2.c ) && (z == f2.z))
				return 1;
			else 
				return 0;
		}
		bool operator != ( fraction f2 )
		{
			if ((c != f2.c ) || (z != f2.z))
				return 1;
			else 
				return 0;
		}
		friend istream& operator >> (istream& s, fraction& f)
		{
			char ch; 
			while ( true )
			{
//				s.unsetf(ios::skipws);
				s >> f.c;
				if ( !s.good() )
					s.clear(ios::failbit);
				s >> ch;
				if (ch != '/')
					s.clear(ios::failbit);
				s >> f.z;
				if ( f.z == 0 )
				{
					cout << "Divider can't be zero!";
					s.clear(ios::failbit);
				}
				if ( s.good() )
				{
					s.ignore(10,'\n');
					break;
				}
				cout << "\nError of input.\n";
				s.ignore(10,'\n');
				s.clear();
			}	
			return s;
		}
		friend ostream& operator << (ostream& s, fraction& f)
		{
			s << f.c << "/" << f.z;
			return s;
		}

		fraction lowterms( fraction );
};

fraction fraction::lowterms( fraction tf )
{
	long tnum, tden, temp, gcd;
	tnum = labs(tf.c);
	tden = labs(tf.z);
	if( tden == 0 )
	{ cout << "Incorrect divider!"; exit(1); }
	else if( tnum == 0 )
	{ tf.c = 0; tf.z = 1; return tf; }
	while( tnum != 0 )
	{
		if( tnum < tden )
		{ temp = tnum; tnum = tden; tden = temp; }
		tnum -= tden;
	}
	gcd = tden;
	tf.c /= gcd;
	tf.z /= gcd;
	return tf;
}


int main()
{
	fraction f1, f2, f3, zf (0, 1);
	char op;

	do {
//		cout << "Enter first fraction, operation and second fraction: ";
//		f1.fget(); cin >> op; f2.fget();
//		cin >> f1 >> op >> f2;
		cout << "\nEnter first fraction: "; 
		cin >> f1;
		cout << "Enter operator (+,-,*,/): "; 
		cin >> op;
		cout << "Enter second fraction: "; 
		cin >> f2;
		
		switch (op)
		{
			case '+': 
			{ f3 = f1 + f2; break;	}
			case '-': 
			{ f3 = f1 - f2; break;	}
			case '*': 
			{ f3 = f1 * f2; break; }
			case '/': 
			{ f3 = f1 / f2; break;	}
		}
		f3 = f3.lowterms ( f3 );
		cout << "Result is: " << f3 << endl;
	} while  (f1 != zf);
	return 0;
}