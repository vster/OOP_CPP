// extern.cpp
// ������������� ���������� ����������
#include <iostream>
using namespace std;
#include <conio.h>           // ��� getch()

char ch = 'a';               // ���������� ���������� ch
void getachar();             // ��������� �������
void putachar();

int main()
{
	while( ch != '\r' )        // main()���������� �������� ch
	{
		getachar();
		putachar();
	}
	cout << endl;
	return 0;
}
//--------------------------------------------------------
void getachar()              // getachar()���������� �������� ch
{
	ch = getch();
}
//--------------------------------------------------------
void putachar()              // putachar() ���������� �������� ch
{
	cout << ch;
}


