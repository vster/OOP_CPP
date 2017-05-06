// ecopycon.cpp
// инициализация объектов с помощью копирующего конструктора
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Distance               // длина в английской системе
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без аргументов
		Distance() : feet(0), inches(0.0)
		{ }
		// конструктора с одним аргументом нет!
		// конструктор с двумя аргументами
		Distance(int ft, float in) : feet(ft), inches(in)
		{ }
		void getdist()           // ввод длины пользователем
		{
			cout << "\nEnter number of feet: "; cin >> feet;
			cout << "Enter number of inches: "; cin >> inches;
		}
		void showdist()          // вывод длины
			{ cout << feet << "\'-" << inches << '\"'; }
};
//////////////////////////////////////////////////////////
int main()
{
	Distance dist1(11, 6.25);  // конструктор с двумя аргументами
	Distance dist2(dist1);     // два конструктора с одним аргументом
	Distance dist3 = dist1;
	// вывод всех длин
	cout <<"\ndist1 = "; dist1.showdist();
	cout <<"\ndist2 = "; dist2.showdist();
	cout <<"\ndist3 = "; dist3.showdist();
	cout << endl;
	return 0;
}

