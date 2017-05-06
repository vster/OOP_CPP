#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
void reversit( char s[])
{
	size_t len = strlen(s);

	for (size_t i = 0; i < len/2; i++)
	{
		char temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
}


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