// prime.cpp
// применение цикла if для определения простых чисел
#include <iostream>
using namespace std;
#include <process.h>         //для exit()

int main()
{
	unsigned long n,j;
	
	cout << "Enter number: ";
	cin >> n;                  			// ввод проверяемого числа
	for(j = 2; j <= n/2; j++)			// деление на целые числа,
		if(n%j == 0)               		// начиная с 2; если остаток
		{                          		//нулевой, то число не простое
			cout << "Number is not simple; divided on " << j << endl;
			exit(0);					// выход из программы
		}
	cout << "Number is simple\n";
	return 0;
}


