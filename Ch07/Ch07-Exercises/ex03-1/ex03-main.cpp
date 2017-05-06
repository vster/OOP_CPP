#include <iostream>
using namespace std;
#include "ex03.h"

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
