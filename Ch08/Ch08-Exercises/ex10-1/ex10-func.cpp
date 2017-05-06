#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "ex10.h"

void Polar::getp()
{ 
	cin >> r >> grad; 
	grad_to_rad(); 
}
void Polar::putp()
{ 
	rad_to_grad(); 
	cout << "(" << r << ", " 
		<< grad << "')"; 
}
void Polar::putxy()
{
	pol_to_xy(); 
	cout  << setiosflags ( ios::fixed ) 
		  << setprecision ( 2 )
		  << "(" << x << ", " << y << ")"; 
}
float Polar::rad_to_grad()
{ 
	grad = phi / PI * 180; 
	return grad; 
}
float Polar::grad_to_rad()
{ 
	phi = grad / 180 * PI; 
	return phi; 
}
void Polar::pol_to_xy()
{ 
	x = r * cos ( phi ); 
	y = r * sin ( phi );	
}
void Polar::xy_to_pol()
{
	r = sqrt( x * x + y * y );
	phi = atan ( y / x );
}
Polar Polar::operator + ( Polar p2)
{
	Polar tp;
	pol_to_xy();
	p2.pol_to_xy();
	tp.x = x + p2.x;
	tp.y = y + p2.y;
	tp.xy_to_pol();
	return tp;
}
