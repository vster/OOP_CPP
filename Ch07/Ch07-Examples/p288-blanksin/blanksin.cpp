// blanksin.cpp
// ввод строки с пробелами
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	const int MAX = 80; // максимальная длина строки
	char str [ MAX ];   // сама строка

	cout << "\nEnter string: ";
	cin.get ( str, MAX );
	cout << "You enter: " << str << endl;

	return 0;
}


