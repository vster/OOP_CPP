#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i, j, n;

	cout << "Enter number: ";
	cin >> n;
	for ( j = 1; j <= 20; j++)
		{
		for (i = 1; i <= 10; i++)
			{
			cout << setw(5) << n * i * j << " ";
			}
		cout << endl;
		}
	return 0;
}