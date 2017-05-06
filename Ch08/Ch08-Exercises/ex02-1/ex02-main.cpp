// strplus.cpp
// перегрузка операции + для строк
#include <iostream>
using namespace std;
#include <string.h>   // для функций strcpy, strcat
#include <stdlib.h>   // для функции exit
#include "ex02.h"

///////////////////////////////////////////////////////////
int main ( )
{
	String s1 = "\nMerry Crysmas! "; 	// используем конструктор с параметром
	String s2 = "Happy New Year!";   	// используем конструктор с параметром
	String s3;                      	// используем конструктор без параметров

	// показываем строки
	s1.display ( );
	s2.display ( );
	s3.display ( );

	s1 += s2;

	// s3 = s1 + s2;       // присваиваем строке s3 результат сложения строк s1 и s2

	s1.display ( );     // показываем результат
	cout << endl;

	return 0;
}


