// adswitch.cpp
// ��������������� ���� � �������������� switch
#include <iostream>
using namespace std;
#include <conio.h>           // ��� getche()

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	
	while( dir !='\r' )
	{
		cout << "\nYour coords: " << x << ", " << y;
		cout << "\nChoose direction (n,s,e,w): ";
		dir = getche();          	// ���� ����������
		switch(dir)              	// switch c ����������� dir
			{
			case 'n': y--; break;  	// �������� �� �����
			case 's': y++; break;  	// �������� �� ��
			case 'e': x++; break;  	// �������� �� ������
			case 'w': x--; break;  	// �������� �� �����
			case '\r': cout << "\nExit...\n" ; break; // ������� Enter
			default: cout << "\nTry again\n";     // ������� ������ ������
			}                        // ����� switch
	}                          		// ����� while
	return 0;
}                            // ����� main()

