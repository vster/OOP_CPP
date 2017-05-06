#include <iostream>
#include <cstring>
using namespace std;
#include "ex01.h"

int main ( )
{
	const int MAX = 80; // максимальный размер строки
	char str [ MAX ];   // сама строка

	cout << "Enter string: ";          // ввод строки
	cin.get( str, MAX);
	reversit(str);

	cout << "Reversing string: " << str << endl; // показ результата

	return 0;
}