#include <iostream>
#include "ex01.h"
using namespace std;

int main()
{
	book b1, b2;
	tape t1, t2;

	cout << endl;
	cout << "\n Info input about 1st book";
	b1.getdata ( );

	cout << endl;
	cout << "\n Info input about 2st book";
	b2.getdata ( );

	cout << endl;
	cout << "\n Info input about 1st tape";
	t1.getdata ( );

	cout << endl;
	cout << "\n Info input about 2st tape";
	t2.getdata ( );


	cout << "\nInfo about 1st book";
	b1.putdata ( );

	cout << "\nInfo about 2st book";
	b2.putdata ( );

	cout << "\nInfo about 1st tape";
	t1.putdata ( );

	cout << "\nInfo about 2st tape";
	t2.putdata ( );

	return 0;
}

