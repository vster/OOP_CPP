#include <iostream>
#include <cstring>
using namespace std;
#include "ex01.h"

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