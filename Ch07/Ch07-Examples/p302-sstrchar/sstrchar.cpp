// sstrchar.cpp
// ������ � �������� � ������
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
	int wlen = (int)word.length ( );     	// ����� ������
	cout << "By one symbol: ";
	for ( int j = 0; j < wlen; j++ )
		cout << word.at ( (size_t)j );        	// ��� ����� �������� �� ����� �� ������� ������
    // cout << word [ j ];        		// � ��� �������� �� �����

	word.copy ( charray, (size_t)wlen, 0 ); 	// �������� ������ � ������
	charray [ wlen ] = 0;
	cout << "\nArray contains: " << charray << endl;

	return 0;
}

