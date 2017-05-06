#include <iostream>
using namespace std;

struct phone 
{
	int area;
	int pbx;
	int abonent;
};

int main()
{
	phone phone1 = { 212, 767, 8900 };
	phone phone2;

	cout << "Enter city code, station number and abonent number:" << endl;
	cin >> phone2.area >> phone2.pbx >> phone2.abonent;

	cout << "My number (" << phone1.area << ") " 
			<< phone1.pbx << " " << phone1.abonent << endl;

	cout << "Your number (" << phone2.area << ") " 
			<< phone2.pbx << " " << phone2.abonent << endl;

	return 0;
}
