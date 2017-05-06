#include <iostream>
using namespace std;

int main()
{
	const int NUM = 10;
	int var;

	var = NUM * 2;
	cout << NUM << endl
		 << var-- << endl
		 << var << endl;
	return 0;
}