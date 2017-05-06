#include <iostream>
#include <conio.h>
using namespace std;
#include "ex02.h"

tollBooth::tollBooth()
	{ totalCars = 0; totalCash = 0.0; }
void tollBooth::payingCar()
	{ totalCars++; totalCash += TOLL; }
void tollBooth::nopayCar()
	{ totalCars++; }
void tollBooth::display() const
	{ 
		cout << "\nCars = " << totalCars << endl
			 << "Cash = " << totalCash
			 << endl;
	}