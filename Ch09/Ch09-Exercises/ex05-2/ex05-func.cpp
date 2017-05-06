#include <iostream>
#include "ex05-func.h"

using namespace std;

void employee::getdata ( )
{
   cout << "\n  Enter name: "; cin >> name;
   cout << "  Enter number: ";     cin >> number;
}
void employee::putdata ( ) const
{
   cout << "\n  Name: " << name;
   cout << "\n  Number: " << number;
}


void employee2::getdata ( )
{
	char ch;
	employee::getdata ( );
	cout << "  Enter value of compensation: "; 
	cin >> compensation;
	cout << "  Enter period (h,w,m): ";
	cin >> ch;
	switch (ch)
	{
		case 'h': { period = hour; break; }
		case 'w': { period = week; break; }
		case 'm': { period = mounth; break; }
	}
}
void employee2::putdata ( ) const
{
	employee::putdata ( );
	cout << "\n  Value of compensation: " << compensation;
	cout << "\n  Period: ";
	switch (period)
	{
		case hour: { cout << "hour"; break; }
		case week: { cout << "week"; break; }
		case mounth: { cout << "mounth"; break; }
	}
}

void manager::getdata ( )
{
     employee2::getdata ( );
     cout << "  Enter title: "; cin >> title;
     cout << "  Enter sum of dues to golf-club: "; cin >> dues;
}
void manager::putdata ( ) const
{
     employee2::putdata ( );
     cout << "\n  Title: " << title;
     cout << "\n  Sum of dues to golf-club: " << dues;
}


void scientist::getdata ( )
{
    employee2::getdata ( );
    cout << "  Enter amount of publications: "; cin >> pubs;
}
void scientist::putdata ( ) const
{
    employee2::putdata ( );
    cout << "\n  Amount of publications: " << pubs;
}


