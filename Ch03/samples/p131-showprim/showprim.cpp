// showprim.cpp
// изображает распределение простых чисел
#include <iostream>
using namespace std;
//#include <conio.h>                 // дл€ getche()
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
	const unsigned char WHITE = 219;  	// белый цвет дл€ простых чисел
	const unsigned char GRAY = 176;   	// серый цвет дл€ остальных чисел
	unsigned char ch;
  
	// действи€ дл€ каждой позиции на экране
	for(int count = 0; count < 80 * 25 - 1 ; count++)
		{
		ch = WHITE;                    //предполагаем, что число простое
		for( int j = 2; j < count; j++)     // делим на каждое целое, большее 2
			if( count%j == 0)              // если остаток равен 0,
				{
				ch = GRAY;                   // то число не простое
				break;                       // выход из внутреннего цикла
				}
		cout << ch;                    	// вывод символа на экран
		}
	getch();                         	// задержка полученного изображени€
	return 0;                        
}


