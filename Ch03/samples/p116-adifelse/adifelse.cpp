// adifelse.cpp
// ��������������� ���� � ����������� ��������� if...else
#include <iostream>
using namespace std;

#include <conio.h>           // ��� getche()
int main()
{
  char dir='a';
  int x=10, y=10;
  cout << "Press Enter for exit...\n";
  while ( dir != '\r' )     // ���� �� ����� ������ ������� Enter
  {
    cout << "\nYour coords: " << x << ", " << y;
    cout << "\nChoose direction (n,s,e,w): ";
    dir = getche();          // ���� �������
    if ( dir == 'n' )        // �������� �� �����
		y--;
    else
		if ( dir == 's' )      // �������� �� ��
			y++;
		else
			if ( dir == 'e' )    // �������� �� ������
				x++;
			else
				if ( dir == 'w' )  // �������� �� �����
					x--;
  }                          // ����� ����� while
  return 0;
}                            // ����� ������� main()


