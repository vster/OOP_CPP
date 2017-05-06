#include <iostream>
#include <conio.h> 
using namespace std;

int main()
{
	int i;
	int num = 0;
	char ch;

	cout << "Enter number: ";
	while ((ch = getche()) != '\r')
		{
			num = num * 10 + (ch - '0');
		}
	cout << "\nYou enter number " << num << endl;
	return 0;
}
