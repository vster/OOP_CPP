#include <iostream>
#include "ex04.h"
using namespace std;

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