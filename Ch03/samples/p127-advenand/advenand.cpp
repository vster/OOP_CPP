// advenand.cpp
// применение операции логического »
#include <iostream>
using namespace std;
#include <process.h>         // дл€ exit()
#include <conio.h>           // дл€ getche()

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	while ( dir != '\r ' )
		{
		cout << "\nYour coords: " << x << ", " << y;
		cout << "\nChoose direction (n,s,e,w): ";
		dir = getche();          	// ввод направлени€
		switch(dir)
			{
			case 'n': y--; break;   // обновление координат
			case 's': y++; break;
			case 'e': x++; break;
			case 'w': x--; break;
			}
		if( x == 7 && y == 11 )      // если x равно 7 и y равно 11
			{
			cout << "\nYou found tresure!\n";
			exit(0);               	// выход из программы
			}
		}                          	//конец switch
	return 0;
}                            //конец main()


