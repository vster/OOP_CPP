// engless.cpp
// перегрузка операции < для сравнения длин

#include <iostream>

using namespace std;
///////////////////////////////////////////////////////////
class Distance // класс английских мер длины
{
	private:
		int feet;
		float inches;
	public:
		// конструктор без параметров
		Distance ( ) : feet ( 0 ), inches ( 0.0 )
		{ }
		// конструктор с двумя параметрами
		Distance ( int ft, float in ) : feet ( ft ), inches ( in )
		{ }
		// получение информации от пользователя
		void getdist ( )
		{
			cout << "\nEnter feet: "; cin >> feet;
			cout << "Enter inches: ";  cin >> inches;
		}
		// показ информации
		void showdist ( )
		{ cout << feet << "\'-" << inches << '\"'; }
		// сравнение двух длин
		bool operator< ( Distance ) const;
};
///////////////////////////////////////////////////////////
// сравнение двух длин
bool Distance::operator< ( Distance d2 ) const
{
	float bf1 = feet + inches / 12;
	float bf2 = d2.feet + d2.inches / 12;
	return ( bf1 < bf2 ) ? true : false;
}
///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist1;            // определяем переменную
	dist1.getdist ( );         // получаем длину от пользователя

	Distance dist2 ( 6, 2.5 ); // определяем и инициализируем переменную

	// показываем длины
	cout << "\ndist1 = "; dist1.showdist ( );
	cout << "\ndist2 = "; dist2.showdist ( );

	// используем наш оператор
	if ( dist1 < dist2 )
		cout << "\ndist1 less than dist2";
	else
		cout << "\ndist1 more or equal dist2";
	cout << endl;

	return 0;
}


