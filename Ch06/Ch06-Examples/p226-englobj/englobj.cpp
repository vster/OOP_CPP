// englobj.cpp
// длины в английской системе в качестве объектов
#include <iostream>
using namespace std;

//////////////////////////////////////////////////////////
class Distance                       // длина в английской системе
{
	private:
		int feet;
		float inches;
	public:
		void setdist( int ft, float in ) // установка значений полей
			{ feet = ft; inches = in; }
		void getdist()                   // ввод полей с клавиатуры
		{
			cout << "\nEnter number of feet: "; cin >> feet;
			cout << "Enter number of inches: "; cin >> inches;
		}
		void showdist()                  // вывод полей на экран
			{ cout << feet << "\'-" << inches << '\"'; } 
};
//////////////////////////////////////////////////////////
int main()
{
	Distance dist1, dist2;             // две длины
	dist1.setdist(11,6.25);            // установка значений для d1
	dist2.getdist();                   // ввод значений для dist2
	// вывод длин на экран
	cout << "\ndist1 = "; dist1.showdist();
	cout << "\ndist2 = "; dist2.showdist();
	cout << endl;
	return 0;
}

