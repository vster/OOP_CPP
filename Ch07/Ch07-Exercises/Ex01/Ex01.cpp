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
	const int MAX = 80; // ������������ ������ ������
	char str [ MAX ];   // ���� ������

	cout << "Enter string: ";          // ���� ������
	cin.get( str, MAX);
	reversit(str);

	cout << "Reversing string: " << str << endl; // ����� ����������

	return 0;
}