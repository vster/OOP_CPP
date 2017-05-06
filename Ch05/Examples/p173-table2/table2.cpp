// table2.cpp
// определение функции без предварительного использования 
// прототипа
#include <iostream>
using namespace std;

//--------------------------------------------------------
// определение функции starline()
void starline()
{
	for( int j = 0; j < 45; j++ )
	cout << '*';
	cout << endl;
}
//--------------------------------------------------------
int main()                   	// функция main()
{
	starline();                	// вызов функции
	cout << "Data type   Range" << endl;
	starline();                	// вызов функции
	cout << "char        -128...127" << endl
		 << "short       -32,768...32,767" << endl
		 << "int         System-dependent" << endl
		 << "long        -2,147,483,648...2,147,483,647" << endl;
	starline();                	// вызов функции
	return 0;
}


