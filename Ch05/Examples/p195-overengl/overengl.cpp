// overengl.cpp
// демонстрирует перегруженные функции
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance              // длина в английской системе
{
	int feet;
	float inches;
};

//////////////////////////////////////////////////////////
void engldisp(Distance);     // прототипы
void engldisp(float);

int main()
{
	Distance d1;               // длина типа Distance
	float d2;                  // длина типа float
	
	// ввод значения d1
	cout << "\nEnter number of feet: "; cin >> d1.feet;
	cout << "Enter number of inches: "; cin >> d1.inches;
	// ввод значения d2
	cout << "Enter number of inches: "; cin >> d2;
	cout << "\nd1 = ";
	engldisp(d1);              // вывод значения d1
	cout << "\nd2 = ";
	engldisp(d2);              // вывод значения d2
	cout << endl;
	return 0;
}
//--------------------------------------------------------
// функция engldisp()
// 
void engldisp(Distance dd )  // параметр dd типа Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}
//--------------------------------------------------------------
//engldisp()
// вывод переменной типа float в футах и дюймах
void engldisp(float dd )     // параметр dd типа float
{
	int feet = static_cast<int>(dd / 12);
	float inches = dd -feet * 12;
	cout << feet << "\'-" << inches << "\"";
}

