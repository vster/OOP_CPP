// divdo2.cpp
// применение оператора continue
#include <iostream>
using namespace std;

int main()
{
	long dividend, divisor;
	char ch;
	do {
		cout << "Enter divedend: "; cin >> dividend;
		cout << "Enter divisor: " ; cin >> divisor;
		if( divisor == 0 )       			// при попытке 
			{                        		// деления на ноль
			cout << "Incorrect divisor!\n"; // вывод сообщения
			continue;                           // возврат в начало цикла
			}
		cout << "The individual is " << dividend / divisor;
		cout << ", the rest is " << dividend % divisor;
		cout << "\nOne more?(y/n): ";
		cin >> ch;
		} while( ch != 'n' );
	return 0;
}


