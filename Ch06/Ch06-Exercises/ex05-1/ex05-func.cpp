#include <iostream>
#include <iomanip>
#include "ex05.h"
using namespace std;

date::date()
	{}
void date::getdate()
{
	char dummychar;			
	cout << "Enter date in format dd/mm/yyyy: ";
	cin >> day >> dummychar >> month >> dummychar >> year;
}
void date::showdate() const
{
	cout << setfill('0') << setw(2) << day << "/" 
	 << setw(2) << month << "/" << year; 
}