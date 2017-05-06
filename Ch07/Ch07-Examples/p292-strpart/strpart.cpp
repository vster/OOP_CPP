// strpart.cpp
// использование строк в классе
#include <iostream>
#include <cstring>
using namespace std;
///////////////////////////////////////////////////////////
class part
{
	private:
		char partname [ 30 ]; // название
		int partnumber;       // номер
		double cost;          // цена
	public:
		void setpart ( char pname [ ], int pn, double c )
		{
			strcpy_s ( partname, pname );
			partnumber = pn;
			cost = c;
		}
		void showpart ( )
		{
			cout << "\nName = " << partname;
			cout << ", number = " << partnumber;
			cout << ", cost = $" << cost;
		}
};
///////////////////////////////////////////////////////////
int main ( )
{
	part part1, part2;

	part1.setpart ( "mufta", 4473, 217.55 );
	part2.setpart ( "vorotok", 9924, 419.25 );
	cout << "\nFirst part: "; part1.showpart ( );
	cout << "\nSecond part: "; part2.showpart ( );
	cout << endl;

	return 0;
}


