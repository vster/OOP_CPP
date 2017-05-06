#include <iostream>
#include <cmath>
using namespace std;

template <class T>
class fraction
{
	private:
		T c;
		T z;
	public:
		fraction<T>()
			{}
		fraction<T> (T cin, T zin) : c ( cin ), z ( zin )
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
		fraction lowterms( fraction );
};

template <class T>
fraction<T> fraction<T>::lowterms( fraction<T> tf )
{
	T tnum, tden, temp, gcd;
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
	fraction<long> f1, f2, f3, zf (0, 1);
	char op, ch;

	do {
		cout << "Enter first fraction, operation and second fraction: ";
		f1.fget(); cin >> op; f2.fget();
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
		cout << "Result is: "; f3.fput(); cout << endl;
	} while  (f1 != zf);
	return 0;
}