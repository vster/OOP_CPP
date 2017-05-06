#include <iostream>
using namespace std;

struct date
{
	int day;
	int month;
	int year;
};

int main()
{
	date d1;
	char dummychar;

	cout << "Enter date in format dd/mm/yyyy: ";
	cin >> d1.day >> dummychar >> d1.month >> dummychar >> d1.year;

	cout << "The date is " << d1.day << "/" << d1.month << "/" << d1.year << endl;

	return 0;
}