#include <iostream>
#include <string>
using namespace std;
#include "ex02.h"

employee::employee()
	{}
void employee::getdata()
{
	cout << "\nEnter name of employee: "; 
	cin >> name;
	cout << "Enter id of employee: ";
	cin >> id;
}
void employee::putdata() const
{
	cout << "\n  Name: " << name;
	cout << "\nNumber: " << id << endl;
}