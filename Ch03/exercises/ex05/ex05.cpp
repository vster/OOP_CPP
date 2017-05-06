#include <iostream>

using namespace std;

int main()
{
	int n, j, i;
	int h = 25;

	for (i = 1; i <= h; i++)
		{
		n = i * 2 - 1;
		for ( j = h - i; j > 0; j--)
			cout << ' ';
		for ( j = 1; j <= n; j++)
			cout << 'X';
		cout << endl;	
		}
	return 0;
}