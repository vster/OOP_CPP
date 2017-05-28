// showprim.cpp
// ���������� ������������� ������� �����
#include <iostream>
using namespace std;
//#include <conio.h>                 // ��� getche()
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
	const unsigned char WHITE = 219;  	// ����� ���� ��� ������� �����
	const unsigned char GRAY = 176;   	// ����� ���� ��� ��������� �����
	unsigned char ch;
  
	// �������� ��� ������ ������� �� ������
	for(int count = 0; count < 80 * 25 - 1 ; count++)
		{
		ch = WHITE;                    //������������, ��� ����� �������
		for( int j = 2; j < count; j++)     // ����� �� ������ �����, ������� 2
			if( count%j == 0)              // ���� ������� ����� 0,
				{
				ch = GRAY;                   // �� ����� �� �������
				break;                       // ����� �� ����������� �����
				}
		cout << ch;                    	// ����� ������� �� �����
		}
	getch();                         	// �������� ����������� �����������
	return 0;                        
}


