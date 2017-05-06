#include <iostream>
#include "ex01.h"
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

void book::getdata ( )
{
    publication::getdata ( );
    cout << "  Enter number of pages: "; 
	cin >> pages;
}
void book::putdata ( ) const
{
    publication::putdata ( );
	cout << "\n  Number of pages: " << pages;
}

void tape::getdata ( )
{
    publication::getdata ( );
    cout << "  Enter duration: "; 
	cin >> duration;
}
void tape::putdata ( ) const
{
    publication::putdata ( );
	cout << "\n  Duration: " << duration;
}