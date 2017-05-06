// signtest.cpp
// работа со знаковыми и беззнаковыми переменными
#include <iostream>
using namespace std;
int main()
{
	int signedVar = 1500000000;          //знаковая переменная
	unsigned int unsignVar = 1500000000; //беззнаковая переменная
	signedVar = (signedVar *2) / 3;      //выход за границы диапазона
	unsignVar = (unsignVar *2) / 3;      // вычисления внутри диапазона
	
	cout << "Signed variable equals " << signedVar << endl;
										// вывод правильного результата
	cout << "Unsigned variable equals " << unsignVar << endl;
										// вывод некорректного результата
	return 0;
}


