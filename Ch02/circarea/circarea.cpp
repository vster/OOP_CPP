//circarea.cpp
//работа с переменными вещественного типа
#include <iostream>          //для cout и т.д.
using namespace std;

int main()
{
	float rad;                 		// переменная вещественного типа
	const float PI =3.14159F;  		// вещественная константа
	
	cout << "Enter circle radius: "; // запрос
	cin >> rad;                		// получение радиуса
	float area = PI *rad *rad; 		// вычисление площади круга
	cout <<"Circle area equals " << area << endl; // вывод результата на экран
	return 0;
}


