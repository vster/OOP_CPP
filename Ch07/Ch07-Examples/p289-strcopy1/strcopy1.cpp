// strcopy1.cpp
// ����������� ������ � �������������� �����
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
int main ( )
{
	// �������� ������
	char str1 [ ] = "All you need is love.";
	int j;

	const int MAX = 80; // ������������ ����� ������
	char str2 [ MAX ];  // ���� ������

	for ( j = 0; j < strlen ( str1 ); j++ ) // �������� strlen ( str1 )
		str2 [ j ] = str1 [ j ];                  // �������� �� str1 � str2
	str2 [ j ] = '\0';                          // ��������� ������ �����
	cout << str2 << endl;                       // � ������� �� �����

	return 0;
}


