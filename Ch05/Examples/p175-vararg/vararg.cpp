// vararg.cpp
// �������� ���������� � ������� � �������� ����������
#include <iostream>
using namespace std;

void repchar(char, int);        // ���������� �������

int main()
{
	char chin;
	int nin;
	
	cout << "Enter symbol: ";
	cin >> chin;
	cout << "Enter number of repetition of symbol: ";
	cin >> nin;
	repchar(chin, nin);
	return 0;
}
//--------------------------------------------------------
// ����������� ������� repchar()
void repchar(char ch, int n)    // ��������� �������
{
	for(int j = 0; j < n; j++)        // ���� �������
	cout << ch;
	cout << endl;
}


