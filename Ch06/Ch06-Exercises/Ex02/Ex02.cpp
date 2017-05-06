#include <iostream>
#include <conio.h>
using namespace std;

const char ESC = 27;
const double TOLL = 0.5;

class tollBooth
{
	private:
		unsigned int totalCars;
		double totalCash;
	public:
		tollBooth()
			{ totalCars = 0; totalCash = 0.0; }
		void payingCar()
			{ totalCars++; totalCash += TOLL; }
		void nopayCar()
			{ totalCars++; }
		void display() const
		{ 
			cout << "\nCars = " << totalCars << endl
				 << "Cash = " << totalCash
				 << endl;
		}
};

int main()
{
	tollBooth tb1;
	char ch;

	cout << "\nPress 1 for paying car, "
		 << "press 0 for car without paying." << endl
		 << "Press ESC for exit.\n";
	do
	{
		ch = getche();
		if (ch == '1')
			tb1.payingCar();
		if (ch == '0')
			tb1.nopayCar();
	} while (ch != ESC);
	tb1.display();
	return 0;
}

