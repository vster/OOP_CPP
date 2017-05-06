#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
	char letter;
	bool lower;

	cout << "Enter letter: ";
	cin >> letter;
	lower = islower(letter);
	cout << "Letter " << letter 
		 << " is lower " << lower;
	return 0;
}
