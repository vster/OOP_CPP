// platters.cpp
// применение ветвления switch
#include <iostream>
using namespace std;

int main()
{
	int speed;              // скорость вращения грампластинки
	cout << "\nEnter number 33,45 or 78: ";
	cin >> speed;           // ввод скорости пользователем
	switch(speed)           // действия, зависящие от выбора скорости 
		{
		case 33:              // если пользователь ввел 33
			cout << "Longplay format\n";
			break;
		case 45:              // если пользователь ввел 45
			cout << "Single format\n";
			break;
		case 78:              // если пользователь ввел 78
			cout << "Old format\n";
		break;
		}
	return 0;
}


