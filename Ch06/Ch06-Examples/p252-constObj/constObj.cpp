//constObj.cpp
//constant Distance objects
#include <iostream>
using namespace std;
//////////////////////////////////////////////////////////
class Distance               // длина в английской системе
{
	private:
		int feet;
		float inches;
	public:                    // конструктор с двумя аргументами
		Distance(int ft, float in) : feet(ft), inches(in)
		{ }
		void getdist()           // неконстантный метод
		{
			cout << "\nEnter number of feet: "; cin >> feet;
			cout << "Enter number of inches: "; cin >> inches;
		}
void showdist() const        // константный метод
	{ cout << feet << "\'-" << inches << '\"'; }
};
//////////////////////////////////////////////////////////
int main()
{
	const Distance football(300,0);
	//football.getdist();      // ошибка: метод getdist() неконстантный
	cout << " Length of field is ";
	football.showdist();       // корректно
	cout << endl;
	return 0;
}

