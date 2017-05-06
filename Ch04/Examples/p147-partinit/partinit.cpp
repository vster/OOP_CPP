// partinit.cpp
// инициализация структурных переменных
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
struct part               // объявление структуры
{
	int modelnumber;        // номер модели изделия
	int partnumber;         // номер детали
	float cost;             // стоимость детали
};

//////////////////////////////////////////////////////////
int main()
{                         	// инициализация переменной
	part part1 = { 6244, 373, 217.55F };
	part part2;             // объявление переменной
							// вывод полей первой переменной	
	cout << "Model " << part1.modelnumber;
	cout << ", part " << part1.partnumber;
	cout << ", cost $" << part1.cost << endl;
	part2 = part1;          // присваивание структурных переменных
	
	// вывод полей второй переменной
	cout << "Model " << part2.modelnumber;
	cout << ", part " << part2.partnumber;
	cout << ", cost $" << part2.cost << endl;
	return 0;
}


