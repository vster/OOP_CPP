#include <iostream>
using namespace std;
///////////////////////////////////////////////////////////
class Distance
{
	private:
		int feet;
		float inches;
	public:
		Distance() : feet( 0 ), inches ( 0 )
		{}
		void getdist ( )	// получение информации
		{
			cout << "\n  Enter feet: "; cin >> feet;
			cout << "  Enter inches: "; cin >> inches;
		}
		void showdist ( ) const		// показ информации
			{ cout << feet << "\'-" << inches << '\"'; }
		void add_dist( Distance, Distance ); // прототип
		void div_dist( Distance, int);
};
//--------------------------------------------------------
// сложение длин d1 и d2
void Distance::add_dist(Distance d1, Distance d2)
{
	inches = d1.inches + d2.inches;        // сложение дюймов
	feet = 0;                              // с возможным заемом
	if(inches >= 12.0)                     // если число дюймов больше 12.0,
	{                                      // то уменьшаем число дюймов
		inches -= 12.0;                      // на 12.0 и увеличиваем
		feet++;                              // число футов на 1
	}
	feet +=	d1.feet + d2.feet;             // сложение футов
}
void Distance::div_dist( Distance d1, int divisor)
{
	float fltfeet = d1.feet + d1.inches / 12.0F;
	fltfeet /= divisor;
	feet = (int) fltfeet;
	inches = ( fltfeet - (float) feet ) * 12.0F;
}

///////////////////////////////////////////////////////////
int main ( )
{
	Distance dist [ 100 ]; // массив переменных
	Distance SumDist, AvDist;
	int n = 0;             // счетчик данных
	char ans;              // ответ пользователя (д/н)
	int j;	

	cout << endl;
	do
	{
		cout << "Enter length number " << n + 1;
		dist [ n++ ].getdist ( );      // получаем и сохраняем длину
		cout << "Continue (y/n)?: ";
		cin >> ans;
	}
	while ( ans != 'n' );            // продолжать, пока не будет введено 'н'

	
	for ( j = 0; j < n; j++)
	{
		SumDist.add_dist(SumDist, dist[j]);
	}
	AvDist.div_dist(SumDist, n);
		
	// показываем все введенное
	for ( j = 0; j < n; j++ )
	{
		cout << "\nLength number " << j + 1 << " : ";
		dist [ j ].showdist ( );
	}
	
	cout << "\nAverage distance: "; AvDist.showdist();
	
	cout << endl;

	return 0;
}
