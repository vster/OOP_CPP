// safetyin.cpp
// избежание переполнения буфера
#include <iostream>
#include <iomanip>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	const int MAX =20;          // максимальный размер строки
	char str [ MAX ];           // сама строка

	cout << "\nEnter string: ";
	cin >> setw ( MAX ) >> str; // ввод не более чем MAX символов

	cout << "You enter: " << str << endl;

	return 0;
}

