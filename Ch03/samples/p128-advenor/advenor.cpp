// advenor.cpp
// ���������� �������� ����������� ���
#include <iostream>
// using namespace std;
// #include <process.h>         // ��� exit()
// #include <conio.h>           // ��� getche()
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
	
    while( dir != '\n' )      		//����� ��� ������� Enter
		{
		cout << "\n\nYour coords: " << x << ", " << y;
		if( x < 5 || x > 15 )        	//���� x ������ 5 ��� ������ 15
		cout << "\nCarefully - dragons!";
		cout <<"\nChoose direction (n,s,e,w): ";
		dir = getche();          	//����� �����������
		switch(dir)
			{
			case 'n': y--; break;  	// ���������� ���������
			case 's': y++; break;
			case 'e': x++; break;
			case 'w': x--; break;
			}                       // ����� switch
		}                          	// ����� while
	return 0;
}                            // ����� main()

