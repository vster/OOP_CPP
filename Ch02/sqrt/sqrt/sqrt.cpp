// sqrt.cpp
// использование библиотечной функции sqrt()
#include <iostream>      //для cout и т.п.
#include <cmath>         //для sqrt()
using namespace std;

int main()
{
	double number,answer;  //аргументы типа double для функции sqrt()
	
	cout << "Enter number: ";
	cin >> number;         // ввод числа
	answer = sqrt(number); // извлечение корня
	cout << "Square root is "
	<< answer << endl;     // вывод результата
	return 0;
}


