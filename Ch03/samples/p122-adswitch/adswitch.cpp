// adswitch.cpp
// ��������������� ���� � �������������� switch
#include <iostream>
#include <termios.h>
#include <stdio.h>

using namespace std;

static struct termios old,nov;

/* Initialize new terminal i/o settings */
void initTermios(int echo)
{
  tcgetattr(0, &old); /* grab old terminal i/o settings */
  nov = old; /* make new settings same as old settings */
  nov.c_lflag &= ~ICANON; /* disable buffered i/o */
  nov.c_lflag &= echo ? ECHO : ~ECHO; /* set echo mode */
  tcsetattr(0, TCSANOW, &nov); /* use these new terminal i/o settings now */
}

/* Restore old terminal i/o settings */
void resetTermios(void)
{
  tcsetattr(0, TCSANOW, &old);
}

/* Read 1 character - echo defines echo mode */
char getch_(int echo)
{
  char ch;
  initTermios(echo);
  ch = getchar();
  resetTermios();
  return ch;
}

/* Read 1 character without echo */
char getch(void)
{
  return getch_(0);
}

/* Read 1 character with echo */
char getche(void)
{
  return getch_(1);
}


int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	
    while( dir !='\n' )
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
            case '\n': cout << "\nExit...\n" ; break; // ������� Enter
			default: cout << "\nTry again\n";     // ������� ������ ������
			}                        // ����� switch
	}                          		// ����� while
	return 0;
}                            // ����� main()

