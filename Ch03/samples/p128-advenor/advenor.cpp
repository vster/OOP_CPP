// advenor.cpp
// применение операции логического »Ћ»
#include <iostream>
using namespace std;
#include <process.h>         // дл€ exit()
#include <conio.h>           // дл€ getche()

int main()
{
	char dir = 'a';
	int x = 10, y = 10;
	
	while( dir != '\r' )      		//выход при нажатии Enter
		{
		cout << "\n\nYour coords: " << x << ", " << y;
		if( x < 5 || x > 15 )        	//если x меньше 5 или больше 15
		cout << "\nCarefully - dragons!";
		cout <<"\nChoose direction (n,s,e,w): ";
		dir = getche();          	//выбор направлени€
		switch(dir)
			{
			case 'n': y--; break;  	// обновление координат
			case 's': y++; break;
			case 'e': x++; break;
			case 'w': x--; break;
			}                       // конец switch
		}                          	// конец while
	return 0;
}                            // конец main()

