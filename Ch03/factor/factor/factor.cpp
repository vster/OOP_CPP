// factor.cpp
// подсчет факториала числа с помощью цикла for
#include <iostream>
using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;       	// тип long для результата
	
	cout << "Enter whole number: ";
	cin >> numb;                  	// ввод числа
	for(int j=numb; j>0; j--)     	// умножение 1 на
		fact *= j;                    // numb, numb-1, ..., 2, 1
	cout << "Factorial of number equal " << fact << endl;
	return 0;
}


