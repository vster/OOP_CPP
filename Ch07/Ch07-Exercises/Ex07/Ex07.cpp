#include <iostream>
#include <iomanip>
#include <string.h>
#include <math.h>

using namespace std;

const int MAX = 80;

class money
{
	private:
		long double m;
		char str[MAX];
	public:
		money()
		{ m = 0.0;}
		const void mstold(char s[]);
		const void putm()
		{ cout << fixed << m; }
};

const void money::mstold(char s[])
{
	size_t j, i;
	for ( j = i = 0; j < (strlen(s)); j++)
		if ( isdigit(s[j]) || s[j] == '.')
			str[i++] = s[j];
	str[i] = '\0';
	m = atof(str);
}

int main ( )
{
	char s1[MAX];
	money m1;
	char ch;

	do 
	{
		cout << "Enter sum in $: ";
		cin >> s1;

		m1.mstold(s1);
	
		cout << "You enter "; m1.putm();
		cout << " dollars" << endl;
		
		cout << "Continue (y/n)? "; cin >> ch;
	} while (ch != 'n');

	return 0;
}