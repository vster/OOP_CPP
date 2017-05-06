// englaray.cpp
// объекты для английских мер
#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		void getdist ( )	// получение информации
		{
			cout << "\n  Enter feet: "; cin >> feet;
			cout << "  Enter inches: "; cin >> inches;
		}
		void showdist ( ) const		// показ информации
			{ cout << feet << "\'-" << inches << '\"'; }
};
///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist [ 100 ]; // массив переменных
	int n = 0;             // счетчик данных
	char ans;              // ответ пользователя (д/н)

	cout << endl;

	do
	{
		cout << "Enter length number " << n + 1;
		dist [ n++ ].getdist ( );      // получаем и сохраняем длину
		cout << "Continue (y/n)?: ";
		cin >> ans;
	}
	while ( ans != 'n' );            // продолжать, пока не будет введено 'н'

	// показываем все введенное
	for ( int j = 0; j < n; j++ )
	{
		cout << "\nLength number " << j + 1 << " : ";
		dist [ j ].showdist ( );
	}

	cout << endl;

	return 0;
}

