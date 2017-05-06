// sstrchar.cpp
// доступ к символам в строке
#include <iostream>
#include <string>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	char charray [ 80 ];
	string word;

	cout << "Enter word: ";
	cin >> word;
	int wlen = (int)word.length ( );     	// длина строки
	cout << "By one symbol: ";
	for ( int j = 0; j < wlen; j++ )
		cout << word.at ( (size_t)j );        	// тут будет проверка на выход за пределы строки
    // cout << word [ j ];        		// а тут проверки не будет

	word.copy ( charray, (size_t)wlen, 0 ); 	// копируем строку в массив
	charray [ wlen ] = 0;
	cout << "\nArray contains: " << charray << endl;

	return 0;
}

