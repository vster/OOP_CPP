// factor2.cpp
// подсчет факториала числа с помощью рекурсии
#include <iostream>
using namespace std;

unsigned long factfunc(unsigned long); // прототип

int main()
{
	int n;                               // число, вводимое пользователем
	unsigned long fact;                  // факториал этого числа
	
	cout << "Enter integer number: ";
	cin >> n;
	fact = factfunc(n);
	cout << "Factorial of number " << n << " is " << fact << endl;
	return 0;
}
//--------------------------------------------------------
// функция factfunc()
// рекурсивно подсчитывает факториал числа
unsigned long factfunc(unsigned long n)
{
	if(n > 1)
		return n * factfunc(n-1);          // вызов самой себя
	else
		return 1;
}


