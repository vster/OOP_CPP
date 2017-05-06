// vl_app.cpp
// вычисляет факториалы больших чисел
#include "verylong.h"    //заголовочный файл verylong

int main()
{

	verylong vl1, vl2, vl3;

	cout << "\nEnter number 1: ";
	vl1.getvl();

	cout << "Enter number 2: ";
	vl2.getvl();

	if ( vl1 < vl2 )
		cout << "vl1 less then vl2" << endl;
	else
		cout << "vl1 >= vl2" << endl;

	vl3 = vl1 - vl2;
	
	cout << "\nSubs is ";
	vl3.putvl();

	vl3 = vl1 * vl2;
	cout << "\nMultip is ";
	vl3.putvl();

  cout << endl;
  return 0;
 }

