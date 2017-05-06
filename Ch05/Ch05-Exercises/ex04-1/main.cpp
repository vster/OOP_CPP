#include <iostream>
#include "ex04.h"
using namespace std;


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