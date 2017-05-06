#include <iostream>
using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact;       	// тип long для результата
	
	do {
		cout << "Enter whole number: ";
		cin >> numb;                  	// ввод числа
		fact = 1;
		for(int j = numb; j > 0; j--)     	// умножение 1 на
			fact *= j;                    // numb, numb-1, ..., 2, 1
		cout << "Factorial of number equal " << fact << endl;
		} while (numb != 0);
	return 0;
}
