// adifelse.cpp
// ��������������� ���� � ����������� ��������� if...else
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
  char dir='a';
  int x=10, y=10;
  cout << "Press Enter for exit...\n";
  while ( dir != '\n' )     // ���� �� ����� ������ ������� Enter
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


