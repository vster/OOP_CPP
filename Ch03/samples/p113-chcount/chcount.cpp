// chcount.cpp
// ������� ����� ���� � �������� � ������
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
	int chcount = 0;           	// ����� ������������ ��������
	int wdcount = 1;           	// ����� ��������
	char ch = 'a';             	// ch ������ ����� ������������ ��������
  
	cout << "Enter string: ";
    while(ch != '\n' )        	// ����, ���� �� ����� ������ ������� Enter
	{
		ch = getche();          // ���������� �������
		if( ch == ' ' )         // ���� ������ �������� ��������,
			wdcount++;          // �� �������������� ����� ����
		else                    // � ��������� ������
		chcount++;             	// �������������� ����� ��������
	}                          	// ����� ����������� �� �����
	cout << "\nWords: " << wdcount << endl
		 << "Letters: " << (chcount-1)<< endl;
	return 0;
}

