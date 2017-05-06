#include <iostream>
using namespace std;

int main ( )
{
	unsigned int a = 0xa2341234, b = 0xb345f35e, c;

	c = a+b;


	cout <<"a =   " << hex << a << endl;
	cout <<"b =   " << hex << b << endl;
	cout <<"a+b = " << hex << a+b << endl;
	cout <<"a-b = " << hex << a-b << endl;
	cout <<"a*b = " << hex << a*b << endl;
	cout <<"a/b = " << hex << a/b << endl;

	return 0;
}
