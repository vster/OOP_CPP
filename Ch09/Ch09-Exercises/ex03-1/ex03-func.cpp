#include <iostream>
#include "ex03-func.h"

using namespace std;

void publication::getdata ( )
{
    cout << "\n  Enter name: ";		
	cin >> title;
    cout << "  Enter price: ";		
	cin >> price;
}
void publication::putdata ( ) const
{
    cout << "\n  Name: " << title;
    cout << "\n  Price: " << price;
}

void sales::getdata()
{
	for (int i = 0; i < 3; i++)
	{
		cout << "  Enter sales for mounth " << i+1 << " : ";
		cin >> ArrSales[i];
	}
}
void sales::putdata ( ) const
{
	for (int i = 0; i < 3; i++ )
		cout << "\n  Sales for mounth " << i+1 
			 << " is " << ArrSales[i];
}

void book::getdata ( )
{
    publication::getdata ( );
	cout << "  Enter number of pages: "; 
	cin >> pages;
	sales::getdata();
}
void book::putdata ( ) const
{
    publication::putdata ( );
	cout << "\n  Number of pages: " << pages;
	sales::putdata();
}



void tape::getdata ( )
{
    publication::getdata ( );
    cout << "  Enter duration: "; 
	cin >> duration;
	sales::getdata(); 
}
void tape::putdata ( ) const
{
    publication::putdata ( );
	cout << "\n  Duration: " << duration;
	sales::putdata();		
}
