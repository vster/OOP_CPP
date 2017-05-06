#include <iostream>
using namespace std;

int main ( )
{
	float flarr[100];
	char ch;
	int num = 0;
	
	do
	{
		cout << "Enter number: ";
		cin >> *(flarr+num++);
		cout << "Continue (y/n)? ";
		cin >> ch;
	} while (ch != 'n');

	float sum = 0.0;
	for (int i = 0; i<num; i++)
		sum += *(flarr+i);
	float av = sum/num;
	
	cout << endl;
	for (int i=0; i < num; i++)
		cout << *(flarr+i) << endl;

	cout << "Average is " << av;

	return 0;
}

