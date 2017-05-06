#include <iostream>
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
			{ 
				simplfrac(); 
			}
		void fget()
		{ 
			char dummychar; 
			cin >> c >> dummychar >> z; 
			simplfrac();
		}
		void fput() const
		{ 
			cout << c << "/" << z; 
		}
		int intput()
		{
			simplfrac();
			return (int)(c/z);
		}
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
		void simplfrac()
		{
			long tnum, tden, temp, gcd;
			tnum = labs(c);
			tden = labs(z);
			if( tden == 0 )
				{ cout << "Incorrect divider!"; exit(1); }
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


class sterling
{
protected:
	long pounds;
	int shillings;
	int pence;
	double decpounds;
public:
	sterling()
	{}
	sterling(long p, int s, int pnc ) : pounds(p), shillings(s), pence(pnc)
	{}
	sterling ( double dp ) : decpounds ( dp )
	{ to_ster(); }
	void to_dec()
	{
		decpounds = (double) pounds + 
					(double) shillings / 20.0F +
					(double) pence / 240.0F;
	}
	void to_ster ()
	{
		double decfrac;
		pounds = (long) decpounds;
		decfrac = decpounds - pounds;
		shillings = (int) (decfrac * 20);
		pence = (int) ((decfrac * 20 - shillings) * 12);
	}
	void getsterling() 
	{ 
		char dch;	
		cin >> dch >> pounds >> dch >> shillings >> dch >> pence; 
		to_dec();
	}
	void putsterling() const
	{ 
		cout << "J" << pounds << "." << shillings << "." << pence; 
	}
	sterling operator + ( sterling s2 )
	{
		sterling ts;
		to_dec();
		s2.to_dec();
		ts.decpounds = decpounds + s2.decpounds;
		ts.to_ster();
		return ts;
	}
	sterling operator - ( sterling s2 )
	{
		sterling ts;
		to_dec();
		s2.to_dec();
		ts.decpounds = decpounds - s2.decpounds;
		ts.to_ster();
		return ts;
	}
	sterling operator * ( double n )
	{
		sterling ts;
		to_dec();
		ts.decpounds = decpounds * n;
		ts.to_ster();
		return ts;
	}
	sterling operator / ( double n )
	{
		sterling ts;
		to_dec();
		ts.decpounds = decpounds / n;
		ts.to_ster();
		return ts;
	}
	double operator / ( sterling s2 )
	{
		double n;
		to_dec();
		s2.to_dec();
		n = decpounds / s2.decpounds;
		return n;
	}	
};

class sterfrac : private sterling
{
private:
	int eighths;
public:
	sterfrac() : sterling ()
	{ eighths = 0; }
	sterfrac ( long p, int s, int pnc, int e ) : sterling( p, s, pnc ) 
	{ eighths = e; }
	void to_dec()
	{
		sterling::to_dec();
		decpounds += (double) eighths/1920.0F;
	}
	void to_ster()
	{
		sterling::to_ster();
		eighths =  (int)((decpounds - 
					((double) pounds + 
					(double) shillings / 20.0F +
					(double) pence / 240.0F )) * 1920.0F);
	}
	void getsterling()
	{
		char dch;
		fraction f1, tf;
		sterling::getsterling();
		cin >> dch;
		f1.fget();
		tf = f1 * fraction(8,1);
		eighths = tf.intput();
		to_dec();
	}
	void putsterling() const
	{
		fraction tf(eighths,8);
		sterling::putsterling();
		cout << '-';
		tf.fput();
	}
	sterfrac operator + ( sterfrac s2 )
	{
		sterfrac ts;
		to_dec();
		s2.to_dec();
		ts.decpounds = decpounds + s2.decpounds;
		ts.to_ster();
		return ts;
	}
	sterfrac operator - ( sterfrac s2 )
	{
		sterfrac ts;
		to_dec();
		s2.to_dec();
		ts.decpounds = decpounds - s2.decpounds;
		if (ts.decpounds < 0)
			ts.decpounds = -ts.decpounds;
		ts.to_ster();
		return ts;
	}
	sterfrac operator * ( double n )
	{
		sterfrac ts;
		to_dec();
		ts.decpounds = decpounds * n;
		ts.to_ster();
		return ts;
	}
	sterfrac operator / ( double n )
	{
		sterfrac ts;
		to_dec();
		ts.decpounds = decpounds / n;
		ts.to_ster();
		return ts;
	}
	double operator / ( sterfrac s2 )
	{
		double n;
		to_dec();
		s2.to_dec();
		n = decpounds / s2.decpounds;
		return n;
	}	
};

int main()
{
	sterfrac p1, p2, p3;
	double n1, n2;

	cout << "\nEnter sum p1: ";
	p1.getsterling();
	cout << "Enter sum p2: ";
	p2.getsterling();
	cout << "Enter number n1: ";
	cin >> n1;

	cout << endl;
	cout << "p1 = ";
	p1.putsterling();
	cout << endl;
	cout << "p2 = ";
	p2.putsterling();
	cout << endl;

	p3 = p1 + p2;
	cout << "p1 + p2 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 - p2;
	cout << "p1 - p2 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 * n1;
	cout << "p1 * n1 = ";
	p3.putsterling();
	cout << endl;

	p3 = p1 / n1;
	cout << "p1 / n1 = ";
	p3.putsterling();
	cout << endl;

	n2 = p1 / p2;
	cout << "p1 / p2 = " << n2;
	cout << endl;

	return 0;
}

