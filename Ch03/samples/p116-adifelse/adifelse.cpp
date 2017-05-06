// adifelse.cpp
// приключенческая игра с применением ветвления if...else
#include <iostream>
using namespace std;

#include <conio.h>           // для getche()
int main()
{
  char dir='a';
  int x=10, y=10;
  cout << "Press Enter for exit...\n";
  while ( dir != '\r' )     // пока не будет нажата клавиша Enter
  {
    cout << "\nYour coords: " << x << ", " << y;
    cout << "\nChoose direction (n,s,e,w): ";
    dir = getche();          // ввод символа
    if ( dir == 'n' )        // движение на север
		y--;
    else
		if ( dir == 's' )      // движение на юг
			y++;
		else
			if ( dir == 'e' )    // движение на восток
				x++;
			else
				if ( dir == 'w' )  // движение на запад
					x--;
  }                          // конец цикла while
  return 0;
}                            // конец функции main()


