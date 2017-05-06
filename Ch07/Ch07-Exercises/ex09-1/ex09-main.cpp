#include <iostream>
using namespace std;
#include "ex09.h"

///////////////////////////////////////////////////////////
int main ( )
{
	Queue q1;
	char ch;
	int num;

	do
	{
		cout << "\nQueue: (p)ut, (g)et or (e)xit? ";
		cin >> ch;
		switch (ch)
		{
			case 'p': 
				{
					cout << "Enter number: ";
					cin >> num;
					q1.put(num);
					break;
				}
			case 'g':
				{
					num = q1.get();
					cout << "Current number in head: " << num << endl;
					break;
				}
			default: break;
		}
	} while (ch != 'e');
	return 0;
}

