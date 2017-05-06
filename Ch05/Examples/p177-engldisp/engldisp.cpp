// engldisp.cpp
// передача структурных переменных в функцию
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct Distance              // длина в английской системе
{
	int feet;
	float inches;
};

//////////////////////////////////////////////////////////
void engldisp( Distance );   // объ€вление
int main()
{
	Distance d1,d2;            	// определение двух длин
								// ввод значений полей d1
	cout << "Enter number of foots: "; cin >> d1.feet;
	cout << "Enter number of inches: "; cin >> d1.inches;
								// ввод значений полей d2
	cout << "\nEnter number of foots: "; cin >> d2.feet;
	cout << "Enter number of inches: "; cin >> d2.inches;
	cout << "\nd1 = ";
	engldisp(d1);              // вывод значени€ d1
	cout << "\nd2 = ";
	engldisp(d2);              // вывод значени€ d2
	cout << endl;
	return 0;
}

//--------------------------------------------------------
// функци€ engldisp(), отображающа€ значени€
// полей структурной переменной типа Distance
void engldisp( Distance dd )  // параметр dd типа Distance
{
	cout << dd.feet << "\'-" << dd.inches << "\"";
}

