//circarea.cpp
//работа с переменными вещественного типа
#include <iostream>          //для cout и т.д.
using namespace std;

float circarea(float radius);

int main()
{
	float rad;                 			// переменная вещественного типа
	
	cout << "Enter circle radius: ";	// запрос
	cin >> rad;                			// получение радиуса
	float area = circarea( rad );  		// вычисление площади круга
	cout << "Circle area equals " << area << endl; // вывод результата на экран
	return 0;
}
//------------------------------------------------------
float circarea(float r)
{
	const float PI = 3.14159F; 	
	return (PI * r * r);
}
