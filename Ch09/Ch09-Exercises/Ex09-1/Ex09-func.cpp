#include <iostream>
#include <iomanip>
#include "Ex09-func.h"

using namespace std;

void publication::getdata ( )
{
	cout << "\n  Enter title: ";		
	cin >> title;
    cout << "  Enter price: ";		
	cin >> price;
}
void publication::putdata ( ) const
{
    cout << "\n  Title: " << title;
    cout << "\n  Price: " << price;
}

void date::getdate()
{
	char dummychar;			
	cout << "  Enter date in format dd/mm/yyyy: ";
	cin >> day >> dummychar >> month >> dummychar >> year;
}
void date::showdate() const
{
	cout << setfill('0') << setw(2) << day << "/" 
		 << setw(2) << month << "/" << year; 
}

void publication2::getdata ( )
{
	publication::getdata ( );
	pdate.getdate();
}
void publication2::putdata ( ) const
{
	publication::putdata ( ); 
	cout << "\n  Date: ";
	pdate.showdate();
}

void book::getdata ( )
{
    publication2::getdata ( );
    cout << "  Enter number of pages: "; 
	cin >> pages;
}
void book::putdata ( ) const
{
    publication2::putdata ( );
	cout << "\n  Number of pages: " << pages;
}



void tape::getdata ( )
{
    publication2::getdata ( );
    cout << "  Enter duration: "; 
	cin >> duration;
}
void tape::putdata ( ) const
{
    publication2::putdata ( );
	cout << "\n  Duration: " << duration;
}