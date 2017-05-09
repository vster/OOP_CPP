// divdo.cpp
// применение цикла do
#include <iostream>
using namespace std;

int main()
{
	long dividend, divisor;
	char ch;
	
	do                    // начало цикла do
	{                     // действия
		cout << "Enter dividend: " ; cin >> dividend;
		cout << "Enter divisor: " ; cin >> divisor;
		cout << "Individual is " << dividend / divisor;
		cout << ", rests is " << dividend % divisor;
		cout << "\nOne more?(y/n): "; 
		cin >> ch;
	}

	while(ch != 'n');    // условие цикла
	return 0;
}

