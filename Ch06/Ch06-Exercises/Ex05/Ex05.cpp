#include <iostream>
#include <iomanip>
using namespace std;

class date
{
	private:
		int day;
		int month;
		int year;
	public:
		date()
		{}
		void getdate()
		{
			char dummychar;			
			cout << "Enter date in format dd/mm/yyyy: ";
			cin >> day >> dummychar >> month >> dummychar >> year;
		}
		void showdate() const
		{
			cout << setfill('0') << setw(2) << day << "/" 
				 << setw(2) << month << "/" << year; 
		}
};

int main()
{
	date d1, d2;

	d1.getdate();
	d2.getdate();

	cout << "\nThe date 1 is "; d1.showdate();
	cout << "\nThe date 2 is "; d2.showdate();

	return 0;
}