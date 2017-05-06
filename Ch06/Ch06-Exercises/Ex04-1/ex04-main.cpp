#include <iostream>
#include "ex04.h"
using namespace std;

int main()
{
	employee e1, e2, e3;

	e1.get_emp();
	e2.get_emp();
	e3.get_emp();

	cout << endl; 

	e1.display_emp();
	e2.display_emp();
	e3.display_emp();

	return 0;
}
