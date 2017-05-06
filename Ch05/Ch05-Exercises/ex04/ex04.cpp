#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance                   // длина в английской системе
{
	int feet;
	float inches;
};

//////////////////////////////////////////////////////////
Distance bigengl( Distance, Distance ); // прототипы
void engldisp(Distance);

int main()
{
	Distance d1, d2, d3;            // три структурные переменные
	// ввод значения d1
	cout << "\nEnter number of feet: "; cin >> d1.feet;
	cout << "Enter number of inches: "; cin >> d1.inches;
	// ввод значения d2
	cout << "\nEnter number of feet: "; cin >> d2.feet;
	cout << "Enter number of inches: "; cin >> d2.inches;
	d3 = bigengl(d1, d2);           // d3 равно наибольшей величине из d1 и d2
	cout << endl;
	cout << "Biggest from ";
	engldisp(d1); cout << " and ";    // вывод всех длин
	engldisp(d2); cout << " is ";
	engldisp(d3); cout << endl;
	return 0;
}

//--------------------------------------------------------
// функция bigengl()
// возвращает максимальное значение типа Distance из двух величин
Distance bigengl(Distance dd1, Distance dd2 )
{
	if(dd1.feet > dd2.feet)
		return dd1;
	if(dd1.feet < dd2.feet)
		return dd2;
	if (dd1.inches > dd2.inches)
			return dd1;
		else
			return dd2;
}

//--------------------------------------------------------
// функция engldisp()
// отображает поля структурной переменной Distance
void engldisp(Distance dd)
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
