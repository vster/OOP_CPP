// linesin.cpp
// ввод нескольких строк
#include <iostream>
using namespace std;
const int MAX = 2000; // максимальная длина строки
char str [ MAX ];     // сама строка
///////////////////////////////////////////////////////////
int main ( )
{
	cout << "\nEnter string:\n";
	cin.get ( str, MAX, '$' );
	cout << "You enter:\n" << str << endl;
	return 0;
}


