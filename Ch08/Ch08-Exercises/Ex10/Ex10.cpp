#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const float PI = 3.1415F;

class Polar
{
private:
	float r;
	float phi;
	float grad;
	float x, y;
public:
	Polar () : r(0), phi(0)
	{}
	void getp()
	{ 
		cin >> r >> grad; 
		grad_to_rad(); 
	}
	void putp()
	{ 
		rad_to_grad(); 
		cout << "(" << r << ", " 
			<< grad << "')"; 
	}
	void putxy()
	{
		pol_to_xy(); 
		cout  << setiosflags ( ios::fixed ) 
			  << setprecision ( 2 )
 			  << "(" << x << ", " << y << ")"; 
	}
	float rad_to_grad()
	{ 
		grad = phi / PI * 180; 
		return grad; 
	}
	float grad_to_rad()
	{ 
		phi = grad / 180 * PI; 
		return phi; 
	}
	void pol_to_xy()
	{ 
		x = r * cos ( phi ); 
		y = r * sin ( phi );	
	}
	void xy_to_pol()
	{
		r = sqrt( x * x + y * y );
		phi = atan ( y / x );
	}
	Polar operator + ( Polar p2)
	{
		Polar tp;
		pol_to_xy();
		p2.pol_to_xy();
		tp.x = x + p2.x;
		tp.y = y + p2.y;
		tp.xy_to_pol();
		return tp;
	}
};

int main()
{
	Polar p1, p2, p3;
	
	cout << "Enter polar coords of point P1, r & phi (in grad): ";
	p1.getp();
	cout << "Enter polar coords of point P2, r & phi (in grad): ";
	p2.getp();
			
	cout << endl;
	cout << "Polar coords of point P1: ";
	p1.putp();
	cout << endl;
	cout << "Orto coords of point P1: ";
	p1.putxy();
	cout << endl;

	cout << "Polar coords of point P2: ";
	p2.putp();
	cout << endl;
	cout << "Orto coords of point P2: ";
	p2.putxy();
	cout << endl;
	
	p3 = p1 + p2;

	cout << "Polar coords of point P3: ";
	p3.putp();
	cout << endl;
	cout << "Orto coords of point P3: ";
	p3.putxy();
	cout << endl;

	return 0;
}



