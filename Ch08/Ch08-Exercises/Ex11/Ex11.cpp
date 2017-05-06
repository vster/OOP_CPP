#include <iostream>
using namespace std;

class sterling
{
private:
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
	{ strlng(); }
	void decpnds()
	{
		decpounds = (double) pounds + 
					(double) shillings / 20.0F +
					(double) pence / 240.0F;
	}
	void strlng ()
	{
		double decfrac;
		pounds = (long) decpounds;
		decfrac = decpounds - pounds;
		shillings = (int) (decfrac * 20);
		pence = (int) ((decfrac * 20 - shillings) * 12);
	}
	void getSterling() 
	{ 
		char dch;	
		cin >> dch >> pounds >> dch >> shillings >> dch >> pence; 
		decpnds();
	}
	void putSterling() const
	{ 
		cout << "J" << pounds << "." << shillings << "." << pence; 
	}
	sterling operator + ( sterling s2 )
	{
		sterling ts;
		decpnds();
		s2.decpnds();
		ts.decpounds = decpounds + s2.decpounds;
		ts.strlng();
		return ts;
	}
	sterling operator - ( sterling s2 )
	{
		sterling ts;
		decpnds();
		s2.decpnds();
		ts.decpounds = decpounds - s2.decpounds;
		ts.strlng();
		return ts;
	}
	sterling operator * ( double n )
	{
		sterling ts;
		decpnds();
		ts.decpounds = decpounds * n;
		ts.strlng();
		return ts;
	}
	sterling operator / ( double n )
	{
		sterling ts;
		decpnds();
		ts.decpounds = decpounds / n;
		ts.strlng();
		return ts;
	}
	double operator / ( sterling s2 )
	{
		double n;
		decpnds();
		s2.decpnds();
		n = decpounds / s2.decpounds;
		return n;
	}	
};

int main()
{
	sterling p1, p2, p3;
	double num, n3;
	
	cout << "Enter sum 1 of sterling: ";
	p1.getSterling();
	cout << "Enter sum 2 of sterling: ";
	p2.getSterling();
	cout << "Enter number: ";
	cin >> num;

	cout << endl;

	cout << "Sum 1 of sterling: ";
	p1.putSterling(); 
	cout << endl;
	cout << "Sum 2 of sterling: ";
	p2.putSterling(); 
	cout << endl;

	p3 = p1 + p2;

	cout << "Sum 1 + Sum 2 of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 - p2;

	cout << "Sum 1 - Sum 2 of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 * num;

	cout << "Sum 1 * Num of sterling: ";
	p3.putSterling(); 
	cout << endl;

	p3 = p1 / num;

	cout << "Sum 1 / Num of sterling: ";
	p3.putSterling(); 
	cout << endl;

	n3 = p1 / p2;

	cout << "Sum 1 / Sum 2 number: ";
	cout << n3 << endl;

	return 0;
}

