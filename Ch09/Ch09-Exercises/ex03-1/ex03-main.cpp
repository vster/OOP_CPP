#include <iostream>
#include "ex03-func.h"

using namespace std;

int main()
{
	book b1;
	tape t1;

	cout << endl;
	cout << "\n Info input about 1st book";
	b1.getdata ( );

	cout << endl;
	cout << "\n Info input about 1st tape";
	t1.getdata ( );

	cout << "\nInfo about 1st book";
	b1.putdata ( );

	cout << "\nInfo about 1st tape";
	t1.putdata ( );

	return 0;
}
